#include <stdio.h>
#include <string.h>

void printSubseq(char *str, char *out, int i, int j) {
    if (str[i] == '\0') {
        out[j] = '\0';
        if (j > 0)  // Skip empty subsequence if desired
            printf("%s\n", out);
        return;
    }

    // Include current character
    out[j] = str[i];
    printSubseq(str, out, i + 1, j + 1);

    // Exclude current character
    printSubseq(str, out, i + 1, j);
}

int main() {
    char str[1000], out[1000];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nAll subsequences:\n");
    printSubseq(str, out, 0, 0);

    return 0;
}
