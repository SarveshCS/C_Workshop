// char s[100] = strcat(c, str)
#include<stdio.h>
#include<string.h>
void main(){
    int i = 0, l;
    char str[100];
    printf("Enter the string : ");
    scanf("%s", &str);
    char tmp[100];
    strcpy(tmp, str);
    l = strlen(str)-1;
    for (i=0; i<l; i++, l--){
        str[i] = str[i] ^ str[l];
        str[l] = str[i] ^ str[l];
        str[i] = str[i] ^ str[l];
    }
    if (!strcmp(tmp, str)){
        printf("Palindrome : ");
    }else{
        printf("Not a palindrome : ");
    }
    printf("%s <-> %s\n", tmp, str);
}