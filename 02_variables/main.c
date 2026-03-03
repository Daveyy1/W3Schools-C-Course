#include <stdio.h>

int calculateRectArea() {
    int height = 5;
    int width = 7;
    int area = height * width;

    printf("The area of the rectangle is: %d", area);
    return 0;
}

int main(void) {
    // Create variables, like in java
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99f;   // Floating point number, add f at end or gets converted to double
    char myLetter = 'D';       // Character
    int x, y, z; // multi-declaration
    int a = 10, b = 15, c = 20; // multi-declaration
    x = a, y = b, c = z;

    int studentId = 15;
    int studentAge = 22;
    float studentFee = 97.75f;
    char studentGrade = 'A';

    // Print variables
    printf("%d\n", myNum); // %d for int
    printf("%.2f\n", myFloatNum); // %f for float
    printf("%c\n", myLetter); // %c for char

    printf("My number is %d and my letter is %c\n", myNum, myLetter); // chainable

    printf("My favorite number is %d.\n", 7); // print without variable

    printf("Student ID: %d\n", studentId);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %.2f\n", studentFee);
    printf("Student Grade %c\n", studentGrade);

    calculateRectArea();

    return 0;
}

