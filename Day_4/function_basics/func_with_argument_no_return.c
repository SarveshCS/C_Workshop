#include <stdio.h>

void sum(int a, int b) { printf("%d + %d = %d", a, b, a + b); } // Functions with both arguments and no return value


void main(){
    int n1, n2;
    printf("Enter the values of n1, n2: ");
    scanf("%d %d", &n1, &n2);
    sum(n1, n2);
}
