#include<stdio.h>
#include<math.h>
void main(){
    int ast;
    printf("Enter the number: ");
    scanf("%d", &ast);
    int tmp = ast;
    int sum = 0;
    while (tmp){
        sum += pow(tmp%10, 3);
        tmp /= 10;
    }
    if (sum == ast){
        printf("True");
    }else{
        printf("False");
    }
}