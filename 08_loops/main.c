#include <stdio.h>

int main(void) {
    // WHILE LOOP //
    int i2 = 0;
    while (i2 < 5) {
        printf("%d\n", i2);
        i2++;
    }

    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy new year!\n");

    // DO-WHILE LOOP //
    int x = 0;
    do { // makes sure the block runs at least once
        printf("%d\n", x);
        x++;
    } while (x < 5);

    int y = 10;

    do {
        printf("y is %d\n", y);
        y++;
    } while (y < 5);

    int number;

    do {
        printf("Enter a positive number:");
        scanf(" %d", &number);
        printf("Your number is %d\n", number);
    } while (number > 0);

    // CODE CHALLENGE //
    // 1) Write int i
    int i = 1;
    // 2) Write while here
    while (i <= 5) {
        // 3) Print i inside the loop
        // 4) Increase i
        printf("%d\n", i);
        i++;
    }

    // FOR-LOOPS
    int z;

    for (z = 1; z <= 10; z = z + 2) {
        printf("%d\n", z);
    } // same as in java

    int i3, j;
    // simple multiplication table
    for (i3 = 1; i3 <= 3; i3++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ", i3 * j);
        }
        printf("\n");
    }

    // BREAK / CONTINUE //
    int age = 1;
    while (age < 10) {
        if (age == 2) {
            continue; // skips one iteration
        }
        printf("%d\n", age);
        age++;
        if (age == 5) {
            break; // jumps out of the loop
        }
    }

    // RL Example
    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // sizeof(myNumbers) = 20 bytes (5 * 4 ints)
    // sizeof(myNumbers[0] = 4 bytes
    // 20 bytes / 4 bytes = 5 elements
    int i;

    for (i = 0; i < length; i++) {
        if (myNumbers[i] < 0) {
            continue; // skip negative numbers
        }
        if (myNumbers[i] == 0) {
            break; // stop loop when zero is found
        }
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}
