#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("./data/first.txt", "w");
    fprintf(fp, "This is the first line");
    fclose(fp);
}