#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter the value at index %d: ", i);
        scanf("%d", arr+i);
    }

    for (i = 0; i < n; i++){
        printf("Value arr[%d] = %d\n", i , *(arr+i));
    }
}