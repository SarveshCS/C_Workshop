# Day 1: Introduction to C Programming

## Topics Covered
- Introduction to C programming language
- Structure of a C program
- Compilation process
- Basic syntax
- Simple programming problems

## Files and Descriptions

### [area_of_circle/main.c](area_of_circle/main.c)
This program calculates the area and perimeter of a circle given its radius.
```c
#include<stdio.h>

void main(){
    printf("Enter radius: ");
    float r;
    scanf("%f", &r);
    float area = 22/7 * r * r;
    float perimeter = 22/7 * 2 * r;
    printf("Area: %f\nPerimeter: %f", area, perimeter);
}
```

### [area_of_triangle/base_height.c](area_of_triangle/base_height.c)
This program calculates the area of a triangle given its base and height.
```c
#include<stdio.h>

void main(){
    float base, height;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the base: ");
    scanf("%f", &height);
    printf("Area: %f", (height*base)/2);
}
```

### [area_of_triangle/herons.c](area_of_triangle/herons.c)
This program calculates the area of a triangle using Heron's formula given the lengths of its sides.
```c
#include<stdio.h>
#include<math.h>
void main(){
    float a, b, c;
    printf("Enter the length of each side: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a+b+c)/2;
    float area = powf(s*(s-a)*(s-b)*(s-c), 0.5);
    printf("Area: %f", area);
}
```

### [avg_3_nums/main.c](avg_3_nums/main.c)
This program calculates the average of three numbers.
```c
#include<stdio.h>

void main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average of 3 numbers is: %d\n", (a+b+c)/3);
}
```

### [avg_3_nums/min_main.c](avg_3_nums/min_main.c)
This is a minimal version of the program that calculates the average of three numbers.
```c
#include<stdio.h>
void main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b+c)/3);
}
```

### [F_C/main.c](F_C/main.c)
This program converts a temperature from Fahrenheit to Celsius.
```c
#include<stdio.h>

void main(){
    float f;
    printf("Enter temp (f): ");
    scanf("%f", &f);
    float temp = (f-32)*5/9;
    printf("Temp in C: %f", temp);
}
```

### [swap_two_nums/main.c](swap_two_nums/main.c)
This program swaps the values of two numbers without using a temporary variable.
```c
#include<stdio.h>

void main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}
```