#include<stdio.h>

void main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average of 3 numbers is: %d\n", (a+b+c)/3);
}