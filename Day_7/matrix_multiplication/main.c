#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, m, x, y, i, j, k;
    printf("Enter the size of Matrix A (ie: row colunm) : ");
    scanf("%d %d", &n, &m);
    printf("Enter the size of Matrix B (ie: row colunm): ");
    scanf("%d %d", &x, &y);

    if (m == x) {

        int arr[n][m];
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                printf("Matrix A (%d, %d): ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        int arr2[x][y];
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                printf("Matrix B (%d, %d): ", i, j);
                scanf("%d", &arr2[i][j]);
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
        
        printf("\nMatrix B\n");
        for (i = 0; i < n; i++){
            printf("[ ");
            for (j = 0; j < m; j++){
                printf("%d ", arr2[i][j]);
            }
            printf("\b ]\n");
        }

        int res[n][y];
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                res[i][j] = 0;
                for (k = 0; k < n; k++){
                    res[i][j] += arr[i][k] * arr2[k][j];
                } 
            }
        }

        printf("\nMatrix A x B\n");
        // Matrix-like format
        for (i = 0; i < n; i++){
            printf("[ ");
            for (j = 0; j < y; j++){
                printf("%d ", res[i][j]);
            }
            printf("\b ]\n");
        }
    }else{
        printf("Matrix multiplication not possible.");
    }
}