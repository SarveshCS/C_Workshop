# Day 5: Pointers and Dynamic Memory Allocation in C

## Topics Covered
- Introduction to pointers
- Pointer arithmetic
- Dynamic memory allocation
- Recap of Day 4

## Files and Descriptions

### [dynamic_allocation/main.c](dynamic_allocation/main.c)
This program demonstrates dynamic memory allocation using `malloc` and `free`.
```c
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory not allocated.\n");
        return;
    }
    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
}
```

### [pointer_arithmetic/main.c](pointer_arithmetic/main.c)
This program demonstrates pointer arithmetic.
```c
#include<stdio.h>
void main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("Elements of array: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr + i));
    }
}
```

### [pointer_to_pointer/main.c](pointer_to_pointer/main.c)
This program demonstrates the use of a pointer to a pointer.
```c
#include<stdio.h>
void main(){
    int var = 10;
    int *ptr = &var;
    int **pptr = &ptr;
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
}
```

### [swap_using_pointers/main.c](swap_using_pointers/main.c)
This program swaps the values of two variables using pointers.
```c
#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main(){
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("After swapping, x = %d, y = %d", x, y);
}
```

### [void_pointer/main.c](void_pointer/main.c)
This program demonstrates the use of a void pointer.
```c
#include<stdio.h>
void main(){
    int a = 10;
    float b = 5.5;
    void *ptr;
    ptr = &a;
    printf("Value of a = %d\n", *(int*)ptr);
    ptr = &b;
    printf("Value of b = %.2f\n", *(float*)ptr);
}
```