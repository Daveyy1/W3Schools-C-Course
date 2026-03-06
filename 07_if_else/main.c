#include <stdio.h>

int main(void) {
    int x = 20;
    int y = 18;

    bool isGreater = x > y;

    if (isGreater) {
        printf("x is greater than y");
    }

    int time = 20;

    if (time < 18) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    int time2 = 16;

    bool isMorning = time2 < 12;
    bool isDay = time2 < 18;

    if (isMorning) {
        printf("Good morning.");
    } else if (isDay) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    // SHORT-HAND IF-ELSE
    int time3 = 20;
    (time < 18) ? printf("Good Day.") : printf("Good evening.");

    int age0 = 20;
    bool isCitizen = true;

    if (age0 >= 18) {
        printf("Old enough to vote.\n");

        if (isCitizen) {
            printf("And you are a citizen, so you can vote!\n");
        } else {
            printf("But you must be a citizen to vote.\n");
        }
    } else {
        printf("Not old enough to vote.\n");
    }

    // REAL-LIFE EXAMPLE //
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

    // CODE CHALLENGE //
    // Write age here
    int age = 20;
    // Write an if statement that checks if age >= 18
    // If true, print "Allowed" inside the if block
    // Write an else statement
    // Inside the else block, print "Not allowed"
    if (age >= 18) {
        printf("Allowed.\n");
    } else {
        printf("Not allowed.\n");
    }

    // SWITCH STATEMENT //
    int day = 4;
    switch (day) {
        case 1:
            printf("Monday.\n");
            break;
        case 2:
            printf("Tuesday.\n");
            break;
        case 3:
            printf("Wednesday.\n");
            break;
        case 4:
            printf("Thursday.\n");
            break;
        default:
            printf("Not allowed.\n");
    }


    return 0;
}