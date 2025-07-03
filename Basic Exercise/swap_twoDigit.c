#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, swappedNum, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Extract last digit

    temp = num;
    while (temp >= 10) {  // Extract first digit
        temp /= 10;
        digits++;
    }
    first = temp;

    // Swap first and last digits
    swappedNum = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("Number after swapping: %d\n", swappedNum);
    return 0;
}
