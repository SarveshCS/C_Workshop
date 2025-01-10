#include<stdio.h>
void towerOfHanoi(int n, char A, char B, char C){
    if (n > 0){
        towerOfHanoi(n-1, A, C, B);
        printf("From %c to %c\n", A, C);
        towerOfHanoi(n-1, B, A, C);
    }
}
void main(){
    int n;
    char A = 'A', B = 'B', C = 'C'; 
    printf("Enter n: ");
    scanf("%d", &n);
    towerOfHanoi(n, A, B, C);
}