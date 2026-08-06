#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int line_count = 0;
    int char_count = 0;
    int space_count = 0;

    printf("Enter the name of the text file: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++; 
        } else if (ch == ' ' || ch == '\t') {
            space_count++;
        }
    }
    
    fclose(fp);
    printf("\nFile Analysis for '%s':\n", filename);
    printf("Number of lines: %d\n", line_count);
    printf("Number of characters: %d\n", char_count);
    printf("Number of blank spaces (including tabs): %d\n", space_count);

    return 0; 
}
