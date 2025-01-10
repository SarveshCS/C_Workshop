#include<stdio.h>

int fun(int x){
    if (x==1){
        return 1;
    }
    return 1 + fun(x-1);
}

void main(){
    int a;
    printf("Enter the numbers: ");
    scanf("%d", &a);
    printf("Value: %d\n", a);
}