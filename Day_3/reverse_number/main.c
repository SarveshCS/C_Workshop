#include<stdio.h>
void main(){
	int num, tmp, res = 0;
	printf("Enter n: ");
	scanf("%d", &num);
	tmp = num;
	while(tmp){
        res = res * 10 + (tmp%10);
        tmp = tmp/10; 
	}
	printf("%d", res);
}