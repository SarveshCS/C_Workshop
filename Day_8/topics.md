# Day 8: Strings in C

## Topics Covered
- String manipulation
- String functions
- Recap of Day 7

## Files and Descriptions

### [concat_strings.c](strings/concat_strings.c)
This program concatenates two strings without using the `strcat` function.
```
#include<stdio.h>

void main(){
    int i = 0, c = 0;
    char str[100], str2[100], res[500];
    printf("Enter the string 1: ");
    scanf("%s", &str);
    printf("Enter the string 2: ");
    scanf("%s", &str2);
    for (i=0; str[i]!='\0'; i++, c++){
        res[c] = str[i];
    }
    for (i=0; str2[i]!='\0'; i++, c++){
        res[c] = str2[i];
    }
    printf("Concat strings: %s", res);
}
```
### [strcpy_function.c](strings/strcpy_function.c)
This program copies one string into another without using the `strcpy` function.
```
#include<stdio.h>

void main(){
    int i = 0;
    printf("Enter the string: ");
    char str[100], c[100];
    scanf("%s", &str);
    for (i=0; str[i]!='\0'; i++){
        c[i] = str[i];
    }
    printf("Copied string: %s", c);
}
```
### [concat_better.c](strings/concat_better.c)
This program concatenates two strings using dynamic memory allocation.
```
#include<stdio.h>
#include<stdlib.h>

void main(){
    int i = 0, c = 0;
    char str[100], str2[100];
    printf("Enter the string 1: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);
    int l1 = strlen(str);
    int l2 = strlen(str2);
    char *res = (char *)malloc((l1+l2) * sizeof(char));
    for (i=0; str[i]!='\0'; i++, c++){
        *(res+c) = str[i];
    }
    for (i=0; str2[i]!='\0'; i++, c++){
        *(res+c) = str2[i];
    }
    printf("Concat strings: %s", res);
}
```
## Inbuilt String Functions

- `strlen()`: used to find the length of the string
`int x = strlen(string);`

- `strcmp()`: used to compare two strings
`int x = strcmp(string1, string2);`

- `strcat()`: used to concatenate strings (add)
`char *result = strcat(destination, source);`

- `strcpy()`: used to copy a string into another string
`char *result = strcpy(destination, source);`

- `strrev()`: used to reverse a string (Note: `strrev` is not part of the standard C library, but it is available in some implementations)
`char *result = strrev(string);`

- `strlwr()`: convert string to lowercase (Note: `strlwr` is not part of the standard C library, but it is available in some implementations)
`char *result = strlwr(string);`

- `strupr()`: convert string to uppercase (Note: `strupr` is not part of the standard C library, but it is available in some implementations)
`char *result = strupr(string);`