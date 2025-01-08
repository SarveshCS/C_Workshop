// Write a program to print sum of first n natural numbers
#include<stdio.h>
void main(){
	int n, i, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		sum = sum + i;
	}
	printf("%d", sum);
}