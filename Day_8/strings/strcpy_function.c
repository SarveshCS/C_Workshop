// strcpy()

#include<stdio.h>

void main(){
    int i = 0, c = 0;
    printf("Enter the string: ");
    char str[100];
    scanf("%s", &str);
    while (str[i] != '\0'){
        c++;
        i++;
    }
    printf("Length of string: %d", c);
}