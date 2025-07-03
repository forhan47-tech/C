#include <stdio.h>

int main() {
    int marks = 85;
    char extracurricular = 'Y'; // 'Y' for yes, 'N' for no

    if (marks >= 90) {
        printf("Congratulations! You are admitted with a scholarship.\n");
    } else if (marks >= 75) {
        if (extracurricular == 'Y') {
            printf("You are admitted based on your extracurricular activities.\n");
        } else {
            printf("You are admitted, but no scholarship awarded.\n");
        }
    } else {
        printf("Admission denied. Better luck next time.\n");
    }

    return 0;
}