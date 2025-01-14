# Day 4: Arrays and Strings in C

## Topics Covered
- Introduction to arrays
- Multi-dimensional arrays
- Strings in C
- Recap of Day 3

## Files and Descriptions

### [array_sum/main.c](array_sum/main.c)
This program calculates the sum of elements in an array.
```c
#include<stdio.h>
void main(){
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements = %d", sum);
}
```

### [matrix_multiplication/main.c](matrix_multiplication/main.c)
This program multiplies two matrices.
```c
#include<stdio.h>
void main(){
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2){
        printf("Matrix multiplication not possible.");
        return;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++){
            result[i][j] = 0;
            for(int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }

    printf("Resultant matrix:\n");
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}
```

### [string_length/main.c](string_length/main.c)
This program calculates the length of a given string.
```c
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of string = %d", strlen(str));
}
```

### [string_reverse/main.c](string_reverse/main.c)
This program reverses a given string.
```c
#include<stdio.h>
#include<string.h>
void main(){
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s", rev);
}
```

### [transpose_matrix/main.c](transpose_matrix/main.c)
This program calculates the transpose of a given matrix.
```c
#include<stdio.h>
void main(){
    int r, c;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c], transpose[c][r];

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose of matrix:\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
}
```