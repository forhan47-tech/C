#include <stdio.h>

#define MAX 1000

int isValid(char *str) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        // Check closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top < 0) return 0;  // Empty stack

            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
                return 0;
        }
    }

    return top == -1;  // Valid if stack is empty
}

int main() {
    char str[1000];

    printf("Enter bracket string: ");
    fgets(str, sizeof(str), stdin);

    if (isValid(str))
        printf("\nVALID bracket string.\n");
    else
        printf("\nINVALID bracket string.\n");

    return 0;
}
