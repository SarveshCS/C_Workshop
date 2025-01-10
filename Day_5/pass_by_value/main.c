#include<stdio.h>

void swap(int x, int y){
    int t;
    t = x;
    x = y;
    y = t;
    printf("Value of Formal parameter: %d %d\n", x, y);
}

void main(){
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("Actual value: %d %d\n", a, b);
}