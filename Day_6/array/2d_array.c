#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, m, i, j;
    printf("Enter the size of diamension 1: ");
    scanf("%d", &n);
    printf("Enter the size of diamension 2: ");
    scanf("%d", &m);

    int arr[n][m];
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Enter the value at index (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // for (i = 0; i < n; i++){
    //     for (j = 0; j < n; j++){
    //         printf("Value arr[%d][%d] = %d \n", i, j , *(arr+i));
    //     }
    // }

    // Matrix-like format
    for (i = 0; i < n; i++){
        printf("[ ");
        for (j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\b ]\n");
    }
}