// // WAP to check if a person is eligible to vote or nor

// #include<stdio.h>
// void main(){
// 	// if (test expression) {statement 1; statement 2; ... statement n;} statement x;
//     int age;
//     printf("Enter age: ");
//     scanf("%d", &age);
// 	if (age >= 18){
//         printf("You can vote\n");
//     }else{
//         printf("You can not vote\n");
//     }
	
// }

// // WAP to find the greatest of two numbers

// #include<stdio.h>
// void main(){
//     int a, b;
//     printf("Enter a and b: ");
//     scanf("%d %d", &a, &b);
// 	if (a > b){
//         printf("a = %d is greatest\n", a);
//     }else{
//         printf("b = %d is greatest\n", b);
//     }
	
// }

// WAP to find if a year is leap year of not

// #include<stdio.h>
// void main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d", &year);
// 	if (year % 4 == 0){
//         if (year % 100 == 0){
//             if (year % 400 == 0){
//                 printf("%d is a leap year\n", year);
//             }else{
//                 printf("%d is not a leap year\n", year);
//             }
//         }else{
//             printf("%d is a leap year\n", year);
//         }
//     }else{
//         printf("%d is not a leap year\n", year);
//     }
// }

// shorter

#include<stdio.h>
void main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("%d is a leap year\n", year);
    }else{
        printf("%d is not a leap year\n", year);
    }
}