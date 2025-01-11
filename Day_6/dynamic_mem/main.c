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
}