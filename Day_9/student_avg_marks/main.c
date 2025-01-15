#include<stdio.h>
#include<string.h>

struct marks{
    float computer;
    float physics;
    float maths;
    float sanskrit;
    float total;
    float avg;
};

struct student{
    char name[100];
    int roll;
    struct marks _marks;
};

void main(){
    struct student student1;

    printf("Enter roll: ");
    scanf("%f", &student1.roll);
    printf("Enter name: ");
    getchar();
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter computer marks: ");
    scanf("%f", &student1._marks.computer);
    printf("Enter physics marks: ");
    scanf("%f", &student1._marks.physics);
    printf("Enter maths marks: ");
    scanf("%f", &student1._marks.maths);
    printf("Enter sanskrit marks: ");
    scanf("%f", &student1._marks.sanskrit);

    student1._marks.total = student1._marks.computer + student1._marks.maths + student1._marks.physics + student1._marks.sanskrit;
    student1._marks.avg = student1._marks.total/4.0;

    printf("Total marks: %.2f\n", student1._marks.total);
    printf("Average marks: %.2f\n", student1._marks.avg);

}