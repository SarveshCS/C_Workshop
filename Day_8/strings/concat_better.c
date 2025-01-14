// char s[100] = strcat(c, str)
#include<stdio.h>
#include<stdlib.h>
void main(){
    int i = 0, c = 0;
    char str[100], str2[100];
    printf("Enter the string 1: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);
    int l1 = strlen(str);
    int l2 = strlen(str2);
    char *res = (char *)malloc((l1+l2) * sizeof(char));
    for (i=0; str[i]!='\0'; i++, c++){
        *(res+c) = str[i];
    }
    for (i=0; str2[i]!='\0'; i++, c++){
        *(res+c) = str2[i];
    }
    printf("Concat strings: %s", res);
}