#include<stdio.h>

void main ()
{   int nbr;
    printf("Entrer un nombre quelconque:\n");
    scanf("%d",&nbr);

    if (nbr<0)
    printf("le nombre %d est negatif.\n",nbr);
    else if(nbr==0)
    printf("le nombre %d est nul.\n",nbr);
    else 
    printf("le nombre %d est positif.\n",nbr);
}