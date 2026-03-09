#include <stdio.h>

int main(void) {
    int myNum;
    char myChar;
    char firstName[10];

    // Ask user
    printf("Type in the number AND a character you want: \n");
    // scan the input, use & to assign to variable
    scanf("%d %c", &myNum, &myChar);

    printf("Type in your first name: \n");
    scanf("%s", &firstName);

    // print the num
    printf("Your number: %d\nYour character: %c\n", myNum, myChar);
    printf("Your name: %s\n", firstName);

    /* PROBLEMS WITH SCANF
     * - strings have to have specified size
     * - cant have whitespaces, tabs, etc. Only "one" word
     * - Sol: use fgets()
    */

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // used to clear the hanging \n from before bc fgets would just terminate without that

    char fullName[30];

    printf("Type in your full name: \n");
    fgets(fullName, sizeof(fullName), stdin); // variable to save, maxSize, where to scan from
    printf("Hello %s\n", fullName);

    // MEMORY ADDRESS //
    int myAge = 43;
    printf("%p", &myAge); // %p is the formatter for pointers, &myAge is the pointer of myAge

    /*
     *You can either modify the variable like here with &myAge or you can define the pointer like this:
     * int *ptr = &myAge;
     * and then set the value like this:
     * *ptr = 10;
     * this is because both point to the same address and you can change the value at the address like this
    return 0;
}