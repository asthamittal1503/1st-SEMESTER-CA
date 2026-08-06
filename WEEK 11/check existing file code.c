#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100];
    char ch;

    printf("Enter the filename to read: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    
    if (fptr == NULL) {
        printf("Error: Could not open file '%s'. Please ensure the file exists.\n", filename);
        return 1; 
    }

    printf("\n--- Contents of '%s' ---\n", filename);

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    printf("\n------------------------\n");
    fclose(fptr);

    return 0; 
}
