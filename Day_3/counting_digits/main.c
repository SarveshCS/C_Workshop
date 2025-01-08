#include<stdio.h>
void main(){
	int num, count = 0;
	printf("Enter n: ");
	scanf("%d", &num);
	if (num == 0){
		count = 1;
	}else{
		while(num){
			num = num/10;
			count++;
		}
	}
	printf("%d", count);
}