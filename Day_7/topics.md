# Day 7: File Handling in C

## Topics Covered
- Introduction to file handling
- File operations (read, write, append)
- File pointers
- Recap of Day 6

## Files and Descriptions

### [file_read/main.c](file_read/main.c)
This program reads the contents of a file and displays it on the console.
```c
#include<stdio.h>
void main(){
    FILE *file;
    char ch;
    file = fopen("example.txt", "r");
    if (file == NULL){
        printf("File does not exist.\n");
        return;
    }
    while((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }
    fclose(file);
}
```

### [file_write/main.c](file_write/main.c)
This program writes user input to a file.
```c
#include<stdio.h>
void main(){
    FILE *file;
    char ch;
    file = fopen("example.txt", "w");
    if (file == NULL){
        printf("File could not be opened.\n");
        return;
    }
    printf("Enter text (press Ctrl+Z to end):\n");
    while((ch = getchar()) != EOF){
        fputc(ch, file);
    }
    fclose(file);
}
```

### [file_append/main.c](file_append/main.c)
This program appends user input to the end of a file.
```c
#include<stdio.h>
void main(){
    FILE *file;
    char ch;
    file = fopen("example.txt", "a");
    if (file == NULL){
        printf("File could not be opened.\n");
        return;
    }
    printf("Enter text to append (press Ctrl+Z to end):\n");
    while((ch = getchar()) != EOF){
        fputc(ch, file);
    }
    fclose(file);
}
```

### [file_copy/main.c](file_copy/main.c)
This program copies the contents of one file to another file.
```c
#include<stdio.h>
void main(){
    FILE *source, *target;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL){
        printf("Source file does not exist.\n");
        return;
    }
    target = fopen("target.txt", "w");
    if (target == NULL){
        fclose(source);
        printf("Target file could not be opened.\n");
        return;
    }
    while((ch = fgetc(source)) != EOF){
        fputc(ch, target);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(target);
}
```

### [file_struct/main.c](file_struct/main.c)
This program demonstrates reading and writing a structure to a file.
```c
#include<stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void main(){
    FILE *file;
    struct Student student;
    file = fopen("student.dat", "w");
    if (file == NULL){
        printf("File could not be opened.\n");
        return;
    }
    printf("Enter name, roll number and marks of student: ");
    scanf("%s %d %f", student.name, &student.roll, &student.marks);
    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("student.dat", "r");
    if (file == NULL){
        printf("File could not be opened.\n");
        return;
    }
    fread(&student, sizeof(struct Student), 1, file);
    printf("Student Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);
    fclose(file);
}
```