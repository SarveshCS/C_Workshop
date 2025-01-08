#include<stdio.h>
void main(){
	int num, tmp, sum = 0;
	printf("Enter n: ");
	scanf("%d", &num);
    tmp = num;
	while(tmp){
		sum += tmp%10;
        tmp = tmp/10;
	}
	printf("%d", sum);
}