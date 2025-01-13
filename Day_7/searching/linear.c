#include<stdio.h>
void main(){
    int n, i, key, res = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++){
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("[");
    for (i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n");

    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++){
        if (arr[i] == key) {res = i; break;}
    }

    if (res){
        printf("%d is at %d index and position %d.\n", key, res, res+1);
    }else{
        printf("Key was not found in the array.\n");
    }
}