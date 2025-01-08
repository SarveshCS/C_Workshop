// Pttern practice
#include<stdio.h>
void main(){
    int n, i, j, c=1;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 0; j < i; j++){
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}