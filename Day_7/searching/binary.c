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

    int tmp, j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    printf("Sorted array : [");
    for (i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n");

    int l, h, mid;
    l = 0;
    h = n-1;
    mid = (l+h)/2;

    while (l < h) {
        if (arr[mid] == key){
            res = mid;
            break;
        }
        else if (arr[mid] > key){
            l = mid+1;
            mid = (l+h)/2;
        }else{
            h = mid-1;
            mid = (l+h)/2;
        }
    }

    if (res){
        printf("%d is at %d index and position %d.\n", key, res, res+1);
    }else{
        printf("Key was not found in the array.\n");
    }
}