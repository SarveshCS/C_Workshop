// Program to print factorial of a number
#include<stdio.h>

int fact(int n){
    int i, c, a = 1, b = 1;
    if (n == 1 || n == 2){
        return 1;
    }
    for (i = 1; i < n-1; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void main(){
    int n, i;
    printf("How many factorials do you want? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%d ", fact(i));
    }
}