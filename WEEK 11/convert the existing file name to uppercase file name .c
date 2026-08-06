#include <stdio.h>
#include <ctype.h> 

int main() {
    FILE *inputFile;
    char filename[100];
    int ch;

    printf("Enter the name of the text file to convert to uppercase: ");
    scanf("%s", filename);
    inputFile = fopen(filename, "r");

    if (inputFile == NULL) {
        printf("Error: Could not open the file '%s'. Please ensure the file exists.\n", filename);
        return 1; 
    }

    printf("\nContent of '%s' in uppercase:\n", filename);

    while ((ch = fgetc(inputFile)) != EOF) {
        putchar(toupper(ch));
    }

    fclose(inputFile);
    printf("\n\nFile content converted and displayed successfully.\n");

    return 0;
}
