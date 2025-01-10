#include<stdio.h>

float area_circle(float r){
    float area = 22/7 * r * r;
    return area;
}

float peri_circle(float r){
    float perimeter = 22/7 * 2 * r;
    return perimeter;
}
void main(){
    printf("Enter radius: ");
    float r;
    scanf("%f", &r);
    float area = area_circle(r);
    float perimeter = peri_circle(r);
    printf("Area: %f\nPerimeter: %f", area, perimeter);
}