#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nString in lowercase: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }

    printf("\nString in uppercase: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
    }

    return 0;
}

