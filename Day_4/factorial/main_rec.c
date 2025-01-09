// Program to print factorial of a number
#include<stdio.h>

int fact(int n){
    if (n == 2){
        return n;
    }
    return n * fact(n-1);
}

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", fact(n));
}