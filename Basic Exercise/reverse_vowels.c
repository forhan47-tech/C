#include <stdio.h>

int isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || 
           ch == 'o' || ch == 'u' || ch == 'A' || 
           ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
    char str[1000];
    int i = 0, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find actual length (excluding newline)
    for (j = 0; str[j] != '\0'; j++);
    if (j > 0 && str[j - 1] == '\n') j--;

    // Two-pointer swap of vowels
    int left = 0, right = j - 1;
    while (left < right) {
        while (left < right && !isVowel(str[left])) left++;
        while (left < right && !isVowel(str[right])) right--;

        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("\nString after reversing vowels:\n%s\n", str);
    return 0;
}
