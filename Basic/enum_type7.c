#include <stdio.h>

// Define enumeration for days of the week
enum Weekday {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

int main() {
    enum Weekday today;
    int choice;

    // Taking user input
    printf("Enter a number (0 for Sunday, 6 for Saturday): ");
    scanf("%d", &choice);

    // Assign input to enum variable
    today = choice;

    // Display selected day
    printf("You selected: ");
    switch (today) {
        case Sunday: printf("Sunday\n"); break;
        case Monday: printf("Monday\n"); break;
        case Tuesday: printf("Tuesday\n"); break;
        case Wednesday: printf("Wednesday\n"); break;
        case Thursday: printf("Thursday\n"); break;
        case Friday: printf("Friday\n"); break;
        case Saturday: printf("Saturday\n"); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}

