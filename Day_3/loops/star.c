// Pttern practice

#include<stdio.h>
void main(){
    int n, i, j;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}