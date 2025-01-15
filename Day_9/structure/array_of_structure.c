#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int class;
    char sec;
};

int main() {
    struct student s[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter class: ");
        scanf("%d", &s[i].class);
        printf("Enter section: ");
        scanf(" %c", &s[i].sec);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s", s[i].name);
        printf("Class: %d\n", s[i].class);
        printf("Section: %c\n", s[i].sec);
    }

    return 0;
}