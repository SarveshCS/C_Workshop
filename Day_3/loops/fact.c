// Write a program to print factorial of a number
#include<stdio.h>
void main(){
	int n, i;
	int fact = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		fact = fact * i;
	}
	printf("%d", fact);
}