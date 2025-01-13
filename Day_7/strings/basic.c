// To create array of string

#include<stdio.h>

void main(){
    int i;
    char colors[3][10] = {"Red", "Blue", "Pink"};
    for (i=0;i<3;i++){
        printf("Color %d is %s\n", i+1, colors[i]);
    }
}