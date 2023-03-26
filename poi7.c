#include<stdio.h>

struct founder
{
    char ceo[10];
};

struct zoho
{
    int employees;
    char comp[5];
    struct founder p;
};

int main()
{
    struct zoho zs = {4000, "zoho", "sridhar"};
    printf("%s %d %s", zs.comp, zs.employees, zs.p.ceo);
    return 0;
}

