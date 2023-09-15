#include<stdio.h>
#include<stdlib.h>

void main ()
{   char c;
    printf("Entrer un caractere:\n");
    scanf("%c",&c);

    if ((c)>='A' && (c)<='Z')
    printf("le caractere %c est un alphabet majuscule.\n",c);
    else if ((c)>='a' && (c)<='z')
    printf("le caractere %c est un alphabet miniscule.\n",c);
    else
    printf("le caractere %c n est pas un alphabet .\n",c);
}