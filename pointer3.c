#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;
    s = (struct Student*) malloc(sizeof(struct Student)); // Allocate memory for the structure

    // Access structure members using pointer and arrow operator
    s->rollno = 101;
    strcpy(s->name, "John Doe");
    s->marks = 85.5;

    // Display the structure members using pointer and arrow operator
    printf("Roll number: %d\n", s->rollno);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);

    // Deallocate memory for the structure
    free(s);

    return 0;
}

