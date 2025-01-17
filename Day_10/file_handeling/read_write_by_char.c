// Write a program to read the data from the keyboard, write it to a file called input, then read the data from the file and print it on the screen

#include <stdio.h>
#include <stdlib.h>

void  main() {
    FILE *file;
    char ch;
    char data[100];

    file = fopen("data/input_2.txt", "w");

    printf("Enter some text: ");
    
    while (ch = getchar() != EOF){
        putc(ch, file);
    }

    fclose(file);

    file = fopen("data/input_2.txt", "r");

    printf("Data read from file:\n");
    if (fgets(data, sizeof(data), file) != NULL){
        printf("%s", data);
    }
    
    fclose(file);
}