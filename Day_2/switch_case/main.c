// // WAP to display name of weak

// #include<stdio.h>
// void main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);

//     switch (a)
//     {
//     case 1:
// printf("Monday\n");
//         break;
//     case 2:
// printf("Tuesday\n");
//         break;
//     case 3:
// printf("Wednesday\n");
//         break;
//     case 4:
// printf("Thursday\n");
//         break;
//     case 5:
// printf("Friday\n");
//         break;
//     case 6:
// printf("Saturday\n");
//         break;
//     case 7:
// printf("Sunday\n");
//         break;
//     default:
// printf("Not a valid day.\n");
//         break;
//     }

// }

// WAP to convert an upper case letter to a lower case letter

#include<stdio.h>
void main(){
    char a;
    // printf("%d %d", 'A', 'Z');
    printf("Enter the char: ");
    scanf("%c", &a);
    if (a>=97 && a<=122){
        printf("%c", a-32);
    }
    if (a>=65 && a<=90){
        printf("%c", a+32);
    }
}