// Pttern practice
#include<stdio.h>
void main(){
    int n, i, j;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}