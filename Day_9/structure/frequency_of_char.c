#include <stdio.h>
#include <string.h>
struct dict {
    char ch;
    int count;
};

int main() {
    struct dict s[256];
    char str[100];
    int i, j;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    char *tmp = strlwr(str);
    int l = strlen(str)-1;
    for (i = 0; i < 256; i++) {
        s[i].ch = (char)(i);
        s[i].count = 0;
    }

    for (j = 0; j<l; j++){
        if (s[(int)tmp[j]].ch == tmp[j]){
            s[(int)tmp[j]].count+=1;
        }
    }

    printf("\nFrequency of char:\n");
    for (int i = 0; i < 256; i++) {
        (s[i].count > 0) ? printf("\'%c\' : %d\n", s[i].ch, s[i].count) : (void)0;
    }

    return 0;
}