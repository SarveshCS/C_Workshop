#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int class;
    char sec;
};

int main() {
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    getchar();
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter class: ");
    scanf("%d", &s.class);
    printf("Enter section: ");
    scanf(" %c", &s.sec);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s", s.name);
    printf("Class: %d\n", s.class);
    printf("Section: %c\n", s.sec);

    return 0;
}