// char s[100] = strcat(c, str)
#include<stdio.h>

void main(){
    int i = 0, c = 0;
    char str[100], str2[100], res[500];
    printf("Enter the string 1: ");
    scanf("%s", &str);
    printf("Enter the string 2: ");
    scanf("%s", &str2);
    for (i=0; str[i]!='\0'; i++, c++){
        res[c] = str[i];
    }
    for (i=0; str2[i]!='\0'; i++, c++){
        res[c] = str2[i];
    }
    printf("Concat strings: %s", res);
}