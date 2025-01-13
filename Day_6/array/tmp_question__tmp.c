#include<stdio.h>
int remove_dupe(int *arr, int size){
    if (size == 1) {
        return *arr;
    } else if(size == 2){
        return 0;
    }
}
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
    remove_dupe(&arr, n);

    printf("Unique element array: [");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\b]\n");

}