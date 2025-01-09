// Program to print factorial of a number
#include<stdio.h>

int fact(int n){
    int i, f = 1;
    for(i = 2; i <= n; i++){
        f*=i;
    }
    return f;
}

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", fact(n));
}