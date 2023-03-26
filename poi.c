#include <stdio.h>

// Defining the structure
struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Creating an object of the structure
    struct student s;

    // Creating a pointer to the structure
    struct student *ptr;

    // Assigning the address of s to the pointer variable
    ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

