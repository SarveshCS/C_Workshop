// Write a program to read the data from the keyboard, write it to a file called input, then read the data from the file and print it on the screen

#include <stdio.h>
#include <stdlib.h>

void  main() {
    FILE *file;
    char input[100];

    file = fopen("data/input.txt", "w");

    printf("Enter some text: ");
    fgets(input, sizeof(input), stdin);

    fprintf(file, input);
    fclose(file);

    file = fopen("data/input.txt", "r");

    printf("Data read from file:\n");
    fgets(input, sizeof(input), file);
    printf("%s", input);
    
    fclose(file);
}