// strcpy(c, str)
#include<stdio.h>

void main(){
    int i = 0;
    printf("Enter the string: ");
    char str[100], c[100];
    scanf("%s", &str);
    for (i=0; str[i]!='\0'; i++){
        c[i] = str[i];
    }
    printf("Copied string: %s", c);
}