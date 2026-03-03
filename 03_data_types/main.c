#include <stdio.h>

int main(void) {
    // CHARS //
    char myLetter = 'A';
    char myAscii = 65;
    char myText[] = "Hello"; // Storing Strings
    printf("My letter: %c, My Ascii: %c, My Text: %s\n\n", myLetter, myAscii, myText);

    // NUMERIC TYPES //
    int myInt = 1000;
    float myFloat = 5.99f; // when not using f, will convert to double
    double myDouble = 19.99999999;
    double myScientific = 5e7;
    printf("My num, float, double and scientific: %d, %.2f, %.2lf, %.2lf\n\n", myInt, myFloat, myDouble, myScientific);

    // MEMORY SIZES //
    int myIntSize;
    float myFloatSize;
    double myDoubleSize;
    char myCharSize;

    printf("%zu\n", sizeof(myIntSize)); // can be 2 or 4
    printf("%zu\n", sizeof(myFloatSize));
    printf("%zu\n", sizeof(myDoubleSize));
    printf("%zu\n\n", sizeof(myCharSize));
    /* Note that we use the %zu format specifier to print the result,
     * instead of %d. This is because the compiler expects the sizeof operator to return a value of type size_t,
     * which is an unsigned integer type. On some computers it might work with %d, but it is safer and more portable to use %zu,
     * which is specifically designed for printing size_t values. */

    // REAL-LIFE EXAMPLE //
    int itemCount = 50;
    float itemCost = 11.99f;
    float totalCost = itemCount * itemCost;
    char currency = '$';
    printf("The total amount of items is %d items.\n", itemCount);
    printf("The cost of each item is %.2f%c.\n", itemCost, currency);
    printf("Thus, the total amounts to %.2f%c.\n\n", totalCost, currency);

    // MORE TYPES //
    // See image in directory "moreTypes.png"
    // "unsigned" means the number cant be negative and can be double the signed amount since it has one more bit available
    int normalInt = 1000;                       // standard int
    double normalDouble = 3.14;                 // standard double
    short int small = -100;                     // smaller int
    unsigned int count = 25;                    // only positive int
    long int big = 1234567890;                  // larger int
    long long int veryBig = 9223372036854775807; // very large int
    unsigned long long int huge = 18446744073709551615U; // very large, only positive
    long double precise = 3.141592653589793238L; // extended precision

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n\n", precise);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double: %zu bytes\n\n", sizeof(long double));

    // CODING CHALLENGE //
    int studentID = 3241;
    float score = 96.5f;
    char grade = 'A';

    printf("Student ID: %d\n", studentID);
    printf("Last exam score: %.2f\n", score);
    printf("Current grade: %c\n", grade);
    return 0;
}