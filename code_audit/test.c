#include <stdio.h>
#include "test.h"

int main() {
    int main;
    int sum;
    char s[10] = "hello";
    char *str = s;
    char input[100]; // Assuming a buffer size of 100 for input
    
    sum = add(1, 2);
    printf("%d\n", sum); // test
    printf("%s\n", str);

    printf("Enter a string: ");
    gets(input); // Unsafe usage of gets function

    printf("You entered: %s\n", input);
    return 0;
}
