// Write a c program to find the first occurance of a char

// char s[100] = strcat(c, str)
#include<stdio.h>
#include<string.h>
void main(){
    int i, j, flag=0, idx = 0;
    char key, str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter the char : ");
    scanf("%s", &key);
    int l = strlen(str);
    for (i=0; i<l; i++){
        if (str[i] == key){
            flag = 1;
            break;
        }
    }
    if (flag){
        printf("The char appears at index %d\n", i);
    }else{
        printf("The char was not found.\n");
    }
}