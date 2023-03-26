#include <stdio.h>

int findGCF(int num1, int num2);

int main() {
    int num1, num2, gcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcf = findGCF(num1, num2);

    printf("The GCF of %d and %d is %d\n", num1, num2, gcf);

    return 0;
}

int findGCF(int num1, int num2) {
    int i, gcf = 1, max;

    max = (num1 > num2) ? num1 : num2;

    for (i = 2; i <= max; i++) {
        if ((num1 % i == 0) && (num2 % i == 0)) {
            gcf = i;
        }
    }

    return gcf;
}

