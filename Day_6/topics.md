# Day 6: Structures and Unions in C

## Topics Covered
- Introduction to structures
- Nested structures
- Arrays of structures
- Introduction to unions
- Recap of Day 5

## Files and Descriptions

### [array_of_structures/main.c](array_of_structures/main.c)
This program demonstrates the use of an array of structures.
```c
#include<stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for(int i = 0; i < n; i++){
        printf("Enter name, roll number and marks of student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }
    printf("Student Details:\n");
    for(int i = 0; i < n; i++){
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
}
```

### [nested_structures/main.c](nested_structures/main.c)
This program demonstrates the use of nested structures.
```c
#include<stdio.h>

struct Address {
    char city[50];
    int pin;
    char state[50];
};

struct Employee {
    char name[50];
    struct Address address;
};

void main(){
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter city: ");
    scanf("%s", emp.address.city);
    printf("Enter pin: ");
    scanf("%d", &emp.address.pin);
    printf("Enter state: ");
    scanf("%s", emp.address.state);

    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("City: %s\n", emp.address.city);
    printf("Pin: %d\n", emp.address.pin);
    printf("State: %s\n", emp.address.state);
}
```

### [structure/main.c](structure/main.c)
This program demonstrates the use of a simple structure.
```c
#include<stdio.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

void main(){
    struct Person person;
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter salary: ");
    scanf("%f", &person.salary);

    printf("Person Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Salary: %.2f\n", person.salary);
}
```

### [union/main.c](union/main.c)
This program demonstrates the use of a union.
```c
#include<stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

void main(){
    union Data data;
    data.i = 10;
    printf("data.i = %d\n", data.i);
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);
    strcpy(data.str, "C Programming");
    printf("data.str = %s\n", data.str);
}
```

### [union_vs_structure/main.c](union_vs_structure/main.c)
This program demonstrates the difference between a union and a structure.
```c
#include<stdio.h>
#include<string.h>

struct DataStruct {
    int i;
    float f;
    char str[20];
};

union DataUnion {
    int i;
    float f;
    char str[20];
};

void main(){
    struct DataStruct dataStruct;
    union DataUnion dataUnion;

    dataStruct.i = 10;
    dataStruct.f = 220.5;
    strcpy(dataStruct.str, "C Programming");

    dataUnion.i = 10;
    dataUnion.f = 220.5;
    strcpy(dataUnion.str, "C Programming");

    printf("Structure data:\n");
    printf("dataStruct.i = %d\n", dataStruct.i);
    printf("dataStruct.f = %.2f\n", dataStruct.f);
    printf("dataStruct.str = %s\n", dataStruct.str);

    printf("\nUnion data:\n");
    printf("dataUnion.i = %d\n", dataUnion.i);
    printf("dataUnion.f = %.2f\n", dataUnion.f);
    printf("dataUnion.str = %s\n", dataUnion.str);
}
```