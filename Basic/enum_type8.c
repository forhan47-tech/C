#include <stdio.h>

enum Level { LOW = 1, MEDIUM = 2, HIGH = 3 };

int main() {
    enum Level userLevel;
    int input;

    printf("Enter level (1=LOW, 2=MEDIUM, 3=HIGH): ");
    scanf("%d", &input);

    userLevel = (enum Level)input;

    switch (userLevel) {
        case LOW:    printf("You selected LOW\n"); break;
        case MEDIUM: printf("You selected MEDIUM\n"); break;
        case HIGH:   printf("You selected HIGH\n"); break;
        default:     printf("Invalid level\n");
    }

    return 0;
}
