#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[1000];
    int maxLen = 1, startIdx = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    if (str[n - 1] == '\n') n--;  // Remove newline

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1 > maxLen)) {
                startIdx = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("\nLongest Palindromic Substring:\n");
    for (int i = startIdx; i < startIdx + maxLen; i++)
        printf("%c", str[i]);
    printf("\nLength: %d\n", maxLen);

    return 0;
}
