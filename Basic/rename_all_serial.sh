#!/bin/bash

# === CONFIG ===
LOG_FILE="rename_log.txt"
MANIFEST_FILE="manifest_after_rename.txt"
UNDO_SCRIPT="undo_rename.sh"
DRY_RUN=false  # Set to true to simulate renaming without applying changes

> "$LOG_FILE"
> "$MANIFEST_FILE"
echo "#!/bin/bash" > "$UNDO_SCRIPT"
echo "# Undo script generated on $(date)" >> "$UNDO_SCRIPT"
echo "# ⚠️ Review before execution" >> "$UNDO_SCRIPT"

# === FUNCTION ===
rename_by_prefix() {
  prefix=$1
  extension=$2
  i=1

  all_files=$(ls ${prefix}*${extension} 2>/dev/null)
  non_serial=()
  serial=()

  for file in $all_files; do
    base=$(basename "$file")
    if [[ "$base" =~ ^${prefix}[0-9]{2}\.${extension#*.}$ ]]; then
      serial+=("$file")
    else
      non_serial+=("$file")
    fi
  done

  files=("${non_serial[@]}" "${serial[@]}")

  for file in "${files[@]}"; do
    new_name="${prefix}$(printf "%02d" $i)${extension}"

    if [ "$file" == "$new_name" ]; then
      echo "Skipping (already named): $file" | tee -a "$LOG_FILE"
    elif [ -e "$new_name" ]; then
      echo "⚠️ Conflict: $new_name exists. Shifting files..." | tee -a "$LOG_FILE"
      j=$((i + 1))
      while [ -e "${prefix}$(printf "%02d" $j)${extension}" ]; do
        ((j++))
      done
      while [ $j -gt $i ]; do
        src="${prefix}$(printf "%02d" $((j - 1)))${extension}"
        dst="${prefix}$(printf "%02d" $j)${extension}"
        echo "Shifting: $src → $dst" | tee -a "$LOG_FILE"
        if [ "$DRY_RUN" = false ]; then
          mv "$src" "$dst"
          echo "mv \"$dst\" \"$src\"" >> "$UNDO_SCRIPT"
        fi
        ((j--))
      done
      echo "Renaming (after shift): $file → $new_name" | tee -a "$LOG_FILE"
      if [ "$DRY_RUN" = false ]; then
        mv "$file" "$new_name"
        echo "mv \"$new_name\" \"$file\"" >> "$UNDO_SCRIPT"
      fi
    else
      echo "Renaming: $file → $new_name" | tee -a "$LOG_FILE"
      if [ "$DRY_RUN" = false ]; then
        mv "$file" "$new_name"
        echo "mv \"$new_name\" \"$file\"" >> "$UNDO_SCRIPT"
      fi
    fi

    echo "$new_name" >> "$MANIFEST_FILE"
    ((i++))
  done

  echo "📂 Category '$prefix': $((${#files[@]})) files processed" >> "$LOG_FILE"
}

# === APPLY TO ALL PREFIXES DETECTED IN YOUR DIRECTORY ===
for prefix in \
  array_ array2D_ array3D_ charArray_ charArray2D_ character_type enum_type error_handling escape_sequence \
  file_handling file_inclusion formatted_output function_ function_array function_pointer function_string \
  function_struct function_union function_enum function_boolean goto_statement linked_list macro_ malloc_ \
  calloc_ realloc_ math_library memory_represent myfile null_statement operator_ passBy_value passBy_reference \
  pointer_ pointer_array pointer_string preprocessor_ printf_scanf recursion_ return_statement sizeof_function \
  stdlib_library string_library string_literal struct_type switch_statement ternary_operator type_casting \
  type_conversion typedef_function union_type while_loop for_loop do_while break_statement continue_statement \
  comment_file const_type auto_type basic_syntax block_scope bit_fields bit_masking boolean_type \
  ctype_library comma_operator lines data increment_decrement arithmetic_operator argument_file \
  elseIf_; do
  rename_by_prefix "$prefix" ".c"
  rename_by_prefix "$prefix" ".h"
  rename_by_prefix "$prefix" ".txt"
done

echo "✅ Renaming complete. Log saved to $LOG_FILE"
echo "📘 Manifest saved to $MANIFEST_FILE"
echo "↩️ Undo script saved to $UNDO_SCRIPT"
