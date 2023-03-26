#include <stdio.h>

struct Student {
    int student_no;
    int grade;
};

int main() {
    int n, i;
    int num_as = 0, num_bs = 0, num_cs = 0, num_ds = 0, num_fs = 0;
    struct Student students[100];

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Get the student number and grade for each student
    for (i = 0; i < n; i++) {
        printf("Enter student number and grade for student %d: ", i+1);
        scanf("%d %d", &students[i].student_no, &students[i].grade);

        // Update the counts for each grade
        if (students[i].grade >= 90) {
            num_as++;
        } else if (students[i].grade >= 78) {
            num_bs++;
        } else if (students[i].grade >= 65) {
            num_cs++;
        } else if (students[i].grade >= 50) {
            num_ds++;
        } else {
            num_fs++;
        }
    }

    // Display the student number, grade, and grade count for each student
    for (i = 0; i < n; i++) {
        printf("Student %d: number = %d, grade = %d\n", i+1, students[i].student_no, students[i].grade);
    }

    // Display the grade counts
    printf("Number of As: %d\n", num_as);
    printf("Number of Bs: %d\n", num_bs);
    printf("Number of Cs: %d\n", num_cs);
    printf("Number of Ds: %d\n", num_ds);
    printf("Number of Fs: %d\n", num_fs);

    return 0;
}

