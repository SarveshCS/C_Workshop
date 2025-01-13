#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, m, x, y, i, j;
    printf("Enter the size of Matrix A (ie: row colunm) : ");
    scanf("%d %d", &n, &m);
    printf("Enter the size of Matrix B (ie: row colunm): ");
    scanf("%d %d", &x, &y);

    if (n == x && m == y) {

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

        int res[n][m];

        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                res[i][j] = arr[i][j] + arr2[i][j];
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
    }else{
        printf("Matrix addition not possible.");
    }
}