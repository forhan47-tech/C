#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Proper divisors of %d are: ", num);
    
    for (i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            if (i != num) {
                printf("%d ", i);
            }
            if (i != num / i && num / i != num) { // Avoid duplicate printing
                printf("%d ", num / i);
            }
        }
    }

    printf("\n");
    return 0;
}

