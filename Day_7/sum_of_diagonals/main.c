#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, m, i, j;
    printf("Enter the size of Matrix A (ie: row colunm) : ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Matrix A (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix A\n");
    for (i = 0; i < n; i++){
            printf("[ ");
            for (j = 0; j < m; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\b ]\n");
        }

    int sum = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (i==j){
                sum += arr[i][j];
            }
        }
    }

    printf("\nSum of diagonal: %d\n", sum);
}