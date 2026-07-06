#include <stdio.h>
#include <stdlib.h> // Required for atoi()

int main() {
    char myString[] = "12345\n"; // A string, maybe from fgets
    int num;

    // Convert the string to an integer
    num = atoi(myString);

    printf("The string was \"%s\"", myString);
    printf("The integer is %d\n", num);

    // You can now do math with it
    printf("The integer plus 10 is %d\n", num + 10);

    return 0;
}