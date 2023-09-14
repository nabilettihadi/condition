#include<stdio.h>
#include<stdlib.h>

void main ()
{   int nbr;
    printf("Entrer un nombre quelconque:\n");
    scanf("%d",&nbr);

    if ((nbr%2)==0)
    printf("le nombre %d est paire.\n",nbr);
    else
    printf("le nombre %d est impaire.\n",nbr);
}