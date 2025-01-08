// Pttern practice
#include<stdio.h>
void main(){
    int n, i, j;
    int A = 65;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 0; j < n-i; j++){
            printf("%c", A+j);
        }
        for (j = 0; j <= i*2-2; j++){
            if ((i*2-1) == 1){
                printf("%c", A+n-1);
            }else{
                printf(" ");
            }
        }
        for (j = n-i-1; j >= 0; j--){
            printf("%c", A+j);
        }
        printf("\n");
    }
}