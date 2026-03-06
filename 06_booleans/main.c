#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool valid = true;
    bool invalid = false;
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    printf("%d\n", valid);
    printf("%d\n", invalid);
    printf("%d\n", 10 > 9);
    printf("%d\n", 10 == 10); // Prints 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Prints 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Prints 0 (false), because 5 is not equal to 55

    // Find out if both hamburger and pizza are tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty);

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote!");
    } else {
        printf("Not old enough to vote.");
    }

    // CODING CHALLENGE //
    // Declare and assign age
    int age = 15;
    // Declare and assign minAge
    int minAge = 12;
    // Print the result of: age >= minAge
    printf("%d\n", age >= minAge);
    return 0;
}