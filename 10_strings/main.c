#include <stdio.h>
#include <string.h> // includes many useful string functions

int main(void) {
    // C doesnt have native String types, you use char arrays and the %s formatter to print
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);

    greetings[0] = 'J';
    printf("%s\n", greetings);

    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    for (int i = 0; i < length; ++i) {
        printf("%c\n", carName[i]);
    }

    // another way of creating strings
    char greetingsScuffed[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetingsScuffed);

    // both ways of creation use the same amount of bytes, so always use first one

    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);
    // \", \' and \\ will insert ", ', and \ respectively in a string //

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu characters\n", strlen(alphabet));
    printf("%zu bytes\n", sizeof(alphabet));   // 27, because it includes the \0, strlen doesnt, use sizeof for memory stuff

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str3));

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s\n", str2);
    return 0;

    // CODING CHALLENGE //
    // Write your code here
    char message[] = "Hello";
    printf("%s\n", message);
}