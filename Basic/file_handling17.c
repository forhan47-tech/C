#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("word_output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char sentence[] = "Writing word by word in C.";
    char *word = strtok(sentence, " "); 

    while (word != NULL) {
        fprintf(fp, "%s\n", word); // Write each word on a new line
        word = strtok(NULL, " ");
    }

    fclose(fp);
    return 0;
}
