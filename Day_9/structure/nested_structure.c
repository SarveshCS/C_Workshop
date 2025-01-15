#include <stdio.h>

struct std {
    int roll;
    char name[50];
};

struct student {
    struct std a;
    float maths;
};

int main() {
    struct student s[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].a.roll);
        getchar();
        printf("Enter name: ");
        fgets(s[i].a.name, sizeof(s[i].a.name), stdin);
        printf("Enter maths marks: ");
        scanf("%f", &s[i].maths);
    }

    printf("\nEntered details of students:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll number: %d\n", s[i].a.roll);
        printf("Name: %s", s[i].a.name);
        printf("Maths marks: %.2f\n", s[i].maths);
    }

    return 0;
}