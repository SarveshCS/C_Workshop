// Program to print factorial of a number
#include<stdio.h>

void fact(int n){
    int i, c, a = 0, b = 1;
    for (i = 1; i <= n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void main(){
    int n, i;
    printf("How many fibonacci numbers do you want? ");
    scanf("%d", &n);
    fact(n);
}