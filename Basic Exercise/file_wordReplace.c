#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *temp;
    char buffer[1024], word[50], replacement[50];

    file = fopen("input.txt", "r");
    temp = fopen("temp.txt", "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter word to replace: ");
    scanf("%s", word);
    printf("Enter replacement word: ");
    scanf("%s", replacement);

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char *pos = strstr(buffer, word);
        while (pos) {
            char tempBuffer[1024];
            strncpy(tempBuffer, buffer, pos - buffer);
            tempBuffer[pos - buffer] = '\0';

            strcat(tempBuffer, replacement);
            strcat(tempBuffer, pos + strlen(word));

            strcpy(buffer, tempBuffer);
            pos = strstr(buffer, word); // Find next occurrence
        }
        fputs(buffer, temp);
    }

    fclose(file);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Word replacement completed.\n");
    return 0;
}
