#include<stdio.h>
void main(){
    int n, i, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    for (i = 0; i < n; i++){
        printf("Value arr[%d] = %d\n", i , arr[i]);
    }

    printf("Sum = %d", sum);
}