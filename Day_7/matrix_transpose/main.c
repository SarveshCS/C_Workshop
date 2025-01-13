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

    int res[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            res[i][j] = arr[j][i];
        }
    }

    printf("\nMatrix A + B\n");
    // Matrix-like format
    for (i = 0; i < n; i++){
        printf("[ ");
        for (j = 0; j < m; j++){
            printf("%d ", res[i][j]);
        }
        printf("\b ]\n");
    }
}