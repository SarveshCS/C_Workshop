// char s[100] = strcat(c, str)
#include<stdio.h>
#include<string.h>
void main(){
    int i = 0, l, flag = 0;
    char str[100];
    printf("Enter the string : ");
    scanf("%s", &str);
    char tmp[100];
    strcpy(tmp, str);
    l = strlen(str)-1;
    for (i=0; i<l; i++, l--){
        if (str[i] == str[l]){
            flag = 1;
        }
    }
    if (flag){
        printf("Palindrome\n");
    }else{
        printf("Not a palindrome\n");
    }
}