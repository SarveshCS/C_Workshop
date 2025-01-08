#include<stdio.h>
void main(){
	int num, count = 0;
	printf("Enter n: ");
	scanf("%d", &num);
	while(num){
        num = num/10;
        count++;
	}
	printf("%d", count);
}