#include<stdio.h>
void main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Pointer Arithmetic: \n");
    printf("Value at ptr: %d\n", *ptr);
    ptr++;
    printf("Value at ptr++: %d\n", *ptr);
    ptr+=2;
    printf("Value at ptr+2: %d\n", *ptr);
}