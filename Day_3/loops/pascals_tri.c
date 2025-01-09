// Pttern practice
#include<stdio.h>
void main(){
    int n, i, j, val;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        val = 1;
        for (j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for (j = 0; j <= i; j++){
            printf("%d ", val);
            val = val * (i - j)/(j+1);
        }
        printf("\n");
    }
}