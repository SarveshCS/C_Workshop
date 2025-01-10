#include<stdio.h>

int fact(int n){
    if (n == 2){
        return 2;
    }
    return n * fact(n-1);
}

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n, fact(n));
}