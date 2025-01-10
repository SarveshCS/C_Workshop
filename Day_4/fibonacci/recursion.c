// Program to print factorial of a number (usig recursion -- will do later)
#include<stdio.h>

int fibo(int n){
    if (n == 1){ return 0; }
    if (n == 2){ return 1; }
    return fibo(n-1) + fibo(n-2);
}

void main(){
    int n, i;
    printf("How many fibonacci numbers do you want? ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        printf("%d ", fibo(i));
    }
}