#include<stdio.h>
void main(){
    int n, i, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Orignal arr: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int tmp;
    for (i = 0; i < n/2; i++){
        tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }

    printf("\nReversed arr: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}