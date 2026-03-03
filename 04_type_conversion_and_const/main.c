#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 2;
    int sum = 5 / 2;

    printf("%d", sum); // Outputs 2

    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f", myFloat); // 9.000000

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d", myInt); // 9

    float sum2 = 5 / 2;

    printf("%f", sum2); // 2.000000

    // Manual conversion: int to float
    float sum3 = (float) 5 / 2;

    printf("%f", sum3); // 2.500000

    int num1 = 5;
    int num2 = 2;
    float sum4 = (float) num1 / num2;

    printf("%f", sum4); // 2.500000

    int num3 = 5;
    int num4 = 2;
    float sum5 = (float) num1 / num2;

    printf("%.1f", sum5); // 2.5

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    /* Calculate the percentage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);


    // CONSTANTS //
    const int myNum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable 'myNum'

    // good practice is using all caps for constants
    const int MINUTESPERHOUR = 60;
    const int MONTHSPERYEAR = 12;

    // you also have to instantiate a constant with a value.
    // this will not work: const int DAYSPERWEEK;
    return 0;
}