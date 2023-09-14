#include<stdio.h>

void main(){
    int v1,v2;
    printf("Entrer la premiere valeur:\n");
    scanf("%d",&v1);

    printf("Entrer la deuxieme valeur:\n");
    scanf("%d",&v2);

    if(v1!=v2)
    printf("la somme des deux valeurs est:%d\n",v1+v2);

    if(v1==v2)
    printf("les deux valeurs sont egaux,alors le triple de leur somme est:%d\n",3*(v1+v2));

}