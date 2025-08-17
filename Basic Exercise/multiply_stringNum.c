#include <stdio.h>
#include <string.h>

void multiply(char num1[], char num2[]) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int result[len1 + len2];
    for (int i = 0; i < len1 + len2; i++)
        result[i] = 0;

    // Multiply each digit
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int prod = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = prod + result[p2];

            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }    

    for (int i = 0; i < len1 + len2; i++) {
        if (i == 0 && result[i] == 0) continue; // Skip leading zero
        printf("%d", result[i]);
    }
    if (len1 == 0 || len2 == 0) {
        printf("0"); // If either number is zero    
    }
}

int main() {
    char num1[1000], num2[1000];
    printf("Enter first number: ");
    scanf("%s", num1);
    printf("Enter second number: ");
    scanf("%s", num2);

    printf("\nProduct: ");
    multiply(num1, num2);
    return 0;
}
