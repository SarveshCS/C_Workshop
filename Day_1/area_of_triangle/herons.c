#include<stdio.h>
#include<math.h>
void main(){
    float a, b, c;
    printf("Enter the length of each side: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a+b+c)/2;
    float area = powf(s*(s-a)*(s-b)*(s-c), 0.5);
    printf("Area: %f", area);
}