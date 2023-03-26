#include<stdio.h>

struct simp 
{
    int i;
    char city[10];
};

int main()
{
    struct simp s1 = {6, "chennai"};
    printf("%s\n", s1.city);
    printf("%d\n", s1.i);
    return 0;
}

