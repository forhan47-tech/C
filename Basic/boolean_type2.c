#include <stdbool.h>
#include <stdio.h>

int main() {
    bool lightOn = true;

    printf("Light is %s\n", lightOn ? "ON" : "OFF");

    // Toggle the value
    lightOn = !lightOn;
    printf("Light is now %s\n", lightOn ? "ON" : "OFF");

    return 0;
}