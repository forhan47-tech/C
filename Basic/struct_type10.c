#include <stdio.h>

// Define a structure for storing user details
struct User {
    char name[50];
    int age;
    float height;
};

int main() {
    struct User user1;  // Declare a structure variable

    // Get user input
    printf("Enter your name, age, and height (in meters):\n");
    scanf("%s %d %f", user1.name, &user1.age, &user1.height);

    
    // Display the stored data
    printf("\nStored User Data:\n");
    printf("Name: %s\n, Age: %d\n, Height: %.2f meters\n", user1.name, user1.age, user1.height);
    return 0;
}

