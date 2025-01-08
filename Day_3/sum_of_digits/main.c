#include<stdio.h>
void main(){
	int n, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	while(n){
		sum += n%10;
        n = n/10;
	}
	printf("%d", sum);
}