#include <stdio.h>

// Structure definition for member access operators
struct Point {
    int x, y;
};

int main() {
    // 1. Parentheses and Member Access Operators
    // Precedence: Highest (1)
    // Associativity: Left-to-right
    struct Point p = {10, 20};
    struct Point *ptr = &p;
    printf("1. Parentheses and Member Access Operators:\n");
    printf("Access using . : %d\n", p.x);    // 10
    printf("Access using -> : %d\n\n", ptr->y); // 20

    // 2. Unary Operators (++ -- & * + - ! ~)
    // Precedence: High (2)
    // Associativity: Right-to-left
    int a = 5;
    int *ptr_a = &a;
    printf("2. Unary Operators:\n");
    printf("Original value: %d\n", a);             // 5
    printf("Pre-increment (++a): %d\n", ++a);      // 6
    printf("Post-increment (a++): %d\n", a++);     // 6
    printf("Value after post-increment: %d\n", a); // 7
    printf("Unary plus (+a): %d\n", +a);           // 7
    printf("Unary minus (-a): %d\n", -a);          // -7
    printf("Logical NOT (!a): %d\n", !a);          // 0
    printf("Bitwise NOT (~a): %d\n", ~a);          // -8
    printf("Address (&a): %p\n", (void*)ptr_a);    // Memory address
    printf("Dereference (*ptr_a): %d\n\n", *ptr_a);// 7

    // 3. Arithmetic Operators (+ - * / %)
    // Precedence: Multiplication/Division/Modulo (3), Addition/Subtraction (4)
    // Associativity: Left-to-right
    int b = 10, c = 3;
    printf("3. Arithmetic Operators:\n");
    printf("Addition (b + c): %d\n", b + c);       // 13
    printf("Subtraction (b - c): %d\n", b - c);   // 7
    printf("Multiplication (b * c): %d\n", b * c);// 30
    printf("Division (b / c): %d\n", b / c);      // 3
    printf("Modulus (b %% c): %d\n\n", b % c);    // 1

    // 4. Relational and Equality Operators (< > <= >= == !=)
    // Precedence: Relational (<, <=, >, >=) (6), Equality (==, !=) (7)
    // Associativity: Left-to-right
    printf("4. Relational and Equality Operators:\n");
    printf("b > c: %d\n", b > c);                 // 1 (true)
    printf("b <= c: %d\n", b <= c);               // 0 (false)
    printf("b >= c: %d\n", b >= c);               // 1 (true)
    printf("b == c: %d\n", b == c);               // 0 (false)
    printf("b != c: %d\n\n", b != c);             // 1 (true)

    // 5. Logical Operators (&& || !)
    // Precedence: Logical AND (&&) (11), Logical OR (||) (12)
    // Associativity: Left-to-right
    int x = 1, y = 0;
    printf("5. Logical Operators:\n");
    printf("x && y: %d\n", x && y);               // 0 (false)
    printf("x || y: %d\n", x || y);               // 1 (true)
    printf("!x: %d\n\n", !x);                     // 0 (false)

    // 6. Bitwise Operators (& | ^ ~ << >>)
    // Precedence: Bitwise AND (&) (8), XOR (^) (9), OR (|) (10), Bitwise shifts (5)
    // Associativity: Left-to-right
    int m = 6, n = 3; // m = 0110, n = 0011
    printf("6. Bitwise Operators:\n");
    printf("Bitwise AND (m & n): %d\n", m & n);   // 2 (0010)
    printf("Bitwise OR (m | n): %d\n", m | n);    // 7 (0111)
    printf("Bitwise XOR (m ^ n): %d\n", m ^ n);   // 5 (0101)
    printf("Bitwise NOT (~m): %d\n", ~m);         // -7
    printf("Left Shift (m << 1): %d\n", m << 1);  // 12 (1100)
    printf("Right Shift (m >> 1): %d\n\n", m >> 1); // 3 (0011)

    // 7. Ternary Operator (? :)
    // Precedence: (13)
    // Associativity: Right-to-left
    printf("7. Ternary Operator:\n");
    int max = (m > n) ? m : n;
    printf("Maximum of m and n: %d\n\n", max);    // 6

    // 8. Assignment Operators (= += -= *= /= %= &= ^= |= <<= >>=)
    // Precedence: (14)
    // Associativity: Right-to-left
    printf("8. Assignment Operators:\n");
    int z = 10;
    z += 5;                                       // z = z + 5
    printf("z after += 5: %d\n", z);              // 15
    z *= 2;                                       // z = z * 2
    printf("z after *= 2: %d\n", z);              // 30
    z >>= 1;                                      // z = z >> 1
    printf("z after >>= 1: %d\n\n", z);           // 15

    // 9. Comma Operator (,)
    // Precedence: Lowest (15)
    // Associativity: Left-to-right
    printf("9. Comma Operator:\n");
    int val, num;
    val = (num = 5, num + 10);                    // First assign num = 5, then val = num + 10
    printf("val: %d, num: %d\n", val, num);       // val = 15, num = 5

    return 0;
}