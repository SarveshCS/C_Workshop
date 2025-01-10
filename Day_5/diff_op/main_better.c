#include<stdio.h>

double rec(double l, double n, int op){
    if (n <= l) { return l; }
    if (!op) {
        return n + rec(l, n-1, op);
    } else if (op == 1) {
        return rec(l, n-1, op) - n;
    } else if (op == 2) {
        return n * rec(l, n-1, op);
    } else if (op == 3) {
        return rec(l, n-1, op) / n;
    }
}

void main(){
    int n, op = 0;
    double l = 1, u = 10;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 10 && n>=1 ){
        printf("Addition: %.0lf", rec(l, u, op));
    }
    else if (n <= 20 && n>=11 ){
        op  = 1;
        printf("Subtraction: %.0lf", rec(l+=10, u+=10, op));
    }
    else if (n <= 30 && n>=21 ){
        op = 2;
        printf("Multiplication: %.0lf", rec(l+=20, u+=20, op));
    }
    else if (n <= 40 && n>=31 ){
        op = 3;
        printf("Division: %le", rec(l+=30, u+=30, op));
    }
}