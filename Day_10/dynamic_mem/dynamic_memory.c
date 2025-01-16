#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int i;
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        printf("Enter the value %d: ", i+1);
        scanf("%d", arr+i);
    }

    for (i = 0; i < n; i++){
        printf("Value arr[%d] = %d\n", i , *(arr+i));
    }

    printf("How many more numbers youw ant to add: ");
    int extra_n;
    scanf("%d", &extra_n);

    arr = realloc(arr, (n+extra_n) * sizeof(int));

    for (i = n; i < n+extra_n; i++){
        printf("Enter the value %d: ", i+1);
        scanf("%d", arr+i);
    }

    for (i = 0; i < n+extra_n; i++){
        printf("Value arr[%d] = %d\n", i , *(arr+i));
    }

    free(arr);
}