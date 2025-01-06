#include<stdio.h>

void main(){
    printf("Enter radius: ");
    float r;
    scanf("%f", &r);
    float area = 22/7 * r * r;
    float perimeter = 22/7 * 2 * r;
    printf("Area: %f\nPerimeter: %f", area, perimeter);
}