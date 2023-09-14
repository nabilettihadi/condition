#include <stdio.h>

void main() {
    char c;
    printf("Entrer votre caractere:\n");
    scanf(" %c", &c); 

    switch (c) {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'e':
        case 'E':
        case 'y':
        case 'Y':
        case 'u':
        case 'U':
            printf("Le caractere %c est une voyelle.\n", c);
            break;
        default:
            printf("Le caractere %c est une consonne.\n", c);
            break;
    }

}