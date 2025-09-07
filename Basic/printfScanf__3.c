#include <stdio.h>

int main() {
    int n, num;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("You entered: %d\n", num);
    }

    return 0;
}

