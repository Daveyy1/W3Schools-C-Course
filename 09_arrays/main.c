#include <stdio.h>

int main(void) {
    // Create int array
    int myNumbers[] = {1, 2, 3, 4, 5};
    printf("%d\n", myNumbers[0]);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }

    myNumbers[0] = 10;
    printf("%d\n", myNumbers[0]);

    // Set array size without values
    int myNumbers2[4];
    // Add elements
    myNumbers2[0] = 25;
    myNumbers2[1] = 50;
    myNumbers2[2] = 75;
    myNumbers2[3] = 100;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", myNumbers2[i]);
    }

    // ARRAY SIZE //
    printf("%zu bytes\n", sizeof(myNumbers));

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // 20 bytes / 4 bytes = 5 elements
    printf("%d elements\n", length);  // Prints 5

    double myValues[] = {1.1, 2.2, 3.3};
    int length2 = sizeof(myValues) / sizeof(myValues[0]);
    printf("%zu bytes\n", sizeof(myValues));
    printf("%d", length2);  // Prints 3

    // Best practice for looping through array, length adapts to array size, no need to worry about j
    int myNumbers3[] = {25, 50, 75, 100};

    int length3 = sizeof(myNumbers3) / sizeof(myNumbers3[0]);
    int j;

    for (j = 0; j < length3; j++) {
        printf("%d\n", myNumbers3[j]);
    }

    // REAL LIFE EXAMPLES //
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum;
    int k;
    int lowestAge = ages[0];

    // get length of arr
    int length4 = sizeof(ages) / sizeof(ages[0]);

    // loop through arr and add up all ages
    for (k = 0; k < length4; k++) {
        sum += ages[k];
    }

    // find lowest age
    for (k = 0; k < length4; k++) {
        if (lowestAge > ages[k]) {
            lowestAge = ages[k];
        }
    }

    // print avg and lowestAge
    avg = sum / length4;
    printf("average age: %.2f\n", avg);
    printf("lowest age: %d\n", lowestAge);

    // 2D ARRAYS //
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; // see "2dArray.png" for visualization
    printf("%d", matrix[0][2]);  // Outputs 2

    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1

    int x, y;
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 3; y++) {
            printf("%d\n", matrix[x][y]);
        }
    }

    // A 3D array with 2 blocks, each with 4 rows and 3 columns
    int example[2][4][3];
    /*
    * This creates a 3D array with:
    *
    * 2 blocks (first index)
    * 4 rows per block (second index)
    * 3 columns per row (third index)
    */

    // CODING CHALLENGE //
    // 1) Declare an int array named numbers with 5 elements
    int numbers[5];
    // 2) Set numbers[0] to 10
    numbers[0] = 10;
    // 3) Set numbers[4] to 50
    numbers[4] = 50;
    // 4) Print numbers[0]
    printf("%d\n", numbers[0]);
    // 5) Print numbers[4]
    printf("%d\n", numbers[4]);
    return 0;
}