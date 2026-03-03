#include <stdio.h>

int main() {
    // C divides operators into the following groups:

    // ARITHMETIC OPERATORS //

    int myNum = 100 + 50;
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)
    printf("MyNum = %d, sum1 = %d, sum2 = %d, sum3 = %d\n", myNum, sum1, sum2, sum3);

    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // 13
    printf("%d\n", x - y); // 7
    printf("%d\n", x * y); // 30
    printf("%d\n", x / y); // 3
    printf("%d\n", x % y); // 1

    int z = 5;
    ++z; // increment by one
    z++;
    printf("%d\n", z); // 7
    --z; // decrement by one
    z--;
    printf("%d\n", z); // 5

    // When dividing two integers, the result will also be an int. if you want float or double, use them in the calc:
    int a = 10;
    int b = 3;
    printf("%d\n", a / b);   // Integer division, result is 3

    double c = 10.0;
    double d = 3.0;
    printf("%f\n", c / d);   // Decimal division, result is 3.333...


    // ASSIGNMENT OPERATORS //
    /* =
     * +=
     * -=
     * *=
     * /=
     * %=
     * &=
     * |=
     * ^=
     * >>=
     * <<=
     */

    int savings = 100;
    savings += 50; // add 50 to savings

    printf("Total savings: %d\n", savings);


    // COMPARISON OPERATORS //

    int x1 = 5;
    int y1 = 3;
    printf("%d\n", x1 > y1); // returns 1 (true) because 5 is greater than 3

    /* == equal to
     * != not equal to
     * > greater than
     * < less than
     * >= greater or equal than
     * <= less or equal than
     */

    int age = 18;

    printf("%d\n", age >= 18); // 1 (true), old enough to vote
    printf("%d\n", age < 18);  // 0 (false)

    int passwordLength = 5;

    printf("%d\n", passwordLength >= 8); // 0 (false), too short
    printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters


    // LOGICAL OPERATORS //
    /* && AND
     * || OR
     * ! NOT
    */

    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);

    // OPERATOR PRECEDENCE //
    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    printf("%d\n", result1);
    printf("%d\n", result2);

    /* () - Parentheses
    *, /, % - Multiplication, Division, Modulus
    +, - - Addition, Subtraction
    >, <, >=, <= - Comparison
    ==, != - Equality
    && - Logical AND
    || - Logical OR
    = - Assignment
    */ // Internal order of C

    // CODING CHALLENGE //
    // Write itemPrice here
    int itemPrice = 5;
    // Write shippingCost here
    int shippingCost = 2;
    // Write sum here (itemPrice + shippingCost)
    int sum = itemPrice + shippingCost;
    // Print sum here
    printf("%d", sum);
    return 0;
}