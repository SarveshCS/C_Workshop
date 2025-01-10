// Program to print factorial of a number
#include<stdio.h>

void fibonacci(int n){
    int i, c, a = 0, b = 1;
    for (i = 1; i <= n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void main(){
    int n;
    printf("How many fibonacci numbers do you want? ");
    scanf("%d", &n);
    fibonacci(n);
}