#include<stdio.h>

int main() {
    int a = 130;
    char *ptr;
    ptr = (char *)&a;
    printf("%d", (unsigned char)*ptr);
    return 0;
}

