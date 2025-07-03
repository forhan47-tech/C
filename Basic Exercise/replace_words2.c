#include <stdio.h>
#include <string.h>

int main() {
    char str[1024] = "The cat sat on the cat mat.";
    char oldWord[] = "cat";
    char newWord[] = "dog";
    char temp[1024];  // Temporary buffer for modified string

    char *pos;
    while ((pos = strstr(str, oldWord)) != NULL) {
        strncpy(temp, str, pos - str);  // Copy before old word
        temp[pos - str] = '\0';
        strcat(temp, newWord);
        strcat(temp, pos + strlen(oldWord));

        strcpy(str, temp);  // Copy back to original string
    }

    printf("Modified Sentence: %s\n", str);

    return 0;
}
