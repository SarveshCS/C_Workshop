# Day 2: Data Types, Variables, and Operators in C

## Topics Covered
- Data types in C
- Variables and Constants
- Basic input/output functions
- Operators in C
- Recap of Day 1

## Files and Descriptions

### [armstrong_number/main.c](armstrong_number/main.c)
This program checks if a given number is an Armstrong number.
```c
#include<stdio.h>
#include<math.h>
void main(){
    int ast;
    printf("Enter the number: ");
    scanf("%d", &ast);
    int tmp = ast;
    int sum = 0;
    while (tmp){
        sum += pow(tmp%10, 3);
        tmp /= 10;
    }
    if (sum == ast){
        printf("True");
    }else{
        printf("False");
    }
}
```

### [practice_program.c](practice_program.c)
This program converts an uppercase letter to a lowercase letter and vice versa.
```c
#include<stdio.h>
void main(){
    char a;
    printf("Enter the char: ");
    scanf("%c", &a);
    if (a>=97 && a<=122){
        printf("%c", a-32);
    }
    if (a>=65 && a<=90){
        printf("%c", a+32);
    }
}
```

### [programs/if_statement.c](programs/if_statement.c)
This file contains multiple programs demonstrating the use of `if` statements:
- Check if a person is eligible to vote
- Find the greatest of two numbers
- Check if a year is a leap year
```c
#include<stdio.h>
void main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is a leap year\n", year);
    }else{
        printf("%d is not a leap year\n", year);
    }
}
```

### [switch_case/main.c](switch_case/main.c)
This program uses a `switch` statement to display the name of the day of the week based on a given number.
```c
#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Not a valid day.\n");
        break;
    }
}
```