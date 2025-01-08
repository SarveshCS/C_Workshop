// Write a program to print sum of first n natural numbers
#include<stdio.h>
void main(){
	int n, i, sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	// printf("%d\n", n*(n+1)/2);
	for (i = 1; i <= n; i++){
		sum = sum + i;
	}
	printf("%d", sum);
}