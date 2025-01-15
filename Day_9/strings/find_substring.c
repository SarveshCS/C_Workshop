// char s[100] = strcat(c, str)
#include<stdio.h>
#include<string.h>
void main(){
    int i, j, flag=0, idx = 0;
    char str[100], key[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter the substring : ");
    scanf("%s", &key);
    int l = strlen(str);
    int kl = strlen(key);
    int res[100] = {-1};
    int count = 0;
    int k=0;
    for (i=0, j=0; i<l; i++){
        printf("%c <-> %c\n", str[i], key[j]);
        if (str[i] == key[j]){
            j++;
            if (!flag){
                idx = i;
            }
            flag = 1;
        }else{
            j=0;
            flag = 0;
        }
        if (j>=kl){
            res[k] = idx;
            k++;
            j=0;
            count++;
            flag = 0;
        }
    }
    if (res[0] != -1){
        for (k = 0;k<count; k++){
            printf("The substring appears from index %d to %d\n", res[k], res[k]+kl-1);
        }
    }else{
        printf("The substring was not found.\n");
    }
}