#include <stdio.h>
#include <string.h>

int main() {
    char words[10][100];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();  // Consume leftover newline

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);

    // Sort using bubble sort
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}
