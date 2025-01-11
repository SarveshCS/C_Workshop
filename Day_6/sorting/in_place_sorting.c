#include<stdio.h>

void main(){
    int n, i, j, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++){
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Orignal array: [");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\b]\n");

    int tmp;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if (arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
    }

    printf("Sorted array: [");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\b]\n");

}