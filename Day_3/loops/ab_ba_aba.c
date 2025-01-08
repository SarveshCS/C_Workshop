// Pttern practice
#include<stdio.h>
void main(){
    int n, i, j;
    int A = 65, B = 66;
    printf("Enter: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 0; j < i; j++){
            if ((i+j)%2 == 0){
                printf("%c", A);
            }else{
                printf("%c", B);
            }
        }
        printf("\n");
    }
}