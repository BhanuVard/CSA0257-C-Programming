#include <stdio.h>

int main() {
    char lowercase, uppercase;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);

    // Convert lowercase to uppercase using ASCII values
    uppercase = lowercase - 32;

    printf("The uppercase letter is %c\n", uppercase);

    return 0;
}

