#include <stdio.h>

int sum() {
    int n1, n2, su;
    printf("Enter the values of n1, n2: ");
    scanf("%d %d", &n1, &n2);
    su = n1 + n2;
    printf("%d", su);
}

void main(){
    sum();   
}