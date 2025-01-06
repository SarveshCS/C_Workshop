#include<stdio.h>

void main(){
    float f;
    printf("Enter temp (f): ");
    scanf("%f", &f);
    float temp = (f-32)*5/9;
    printf("Temp in C: %f", temp);
}