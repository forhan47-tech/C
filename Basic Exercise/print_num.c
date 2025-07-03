#include <stdio.h>

int main() {
    int p, q, num = 1;

    printf("Enter number of lines (p): ");
    scanf("%d", &p);
    printf("Enter numbers per line (q): ");
    scanf("%d", &q);

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
