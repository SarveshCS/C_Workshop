// char s[100] = strcat(c, str)
#include<stdio.h>
#include<string.h>
void main(){
    int i = 0, l;
    char tmp;
    char str[100];
    printf("Enter the string : ");
    scanf("%s", &str);
    l = strlen(str)-1;
    for (i=0; i<l; i++, l--){
        str[i] = str[i] ^ str[l];
        str[l] = str[i] ^ str[l];
        str[i] = str[i] ^ str[l];
    }

    printf("Reversed strings : %s", str);
}