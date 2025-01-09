#include <stdio.h>

int sum(int a, int b) { return a + b; } // Functions with both arguments and return value


void main(){
    int n1, n2, su;
    printf("Enter the values of n1, n2: ");
    scanf("%d %d", &n1, &n2);
    su = sum(n1, n2);
    printf("%d + %d = %d", n1, n2, su);
}
