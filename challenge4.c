#include<stdio.h>
#include<math.h>

void main ()
{   int a,b,c;
    float delta,x1,x2;
    printf("Entrer les coefficients de votre equation (ax^2+bx+c): \n");
    scanf("%d""%d""%d",&a,&b,&c);

    delta=(pow(b,2)-4*a*c);
    
    if(delta>0){
            x1=(-b-sqrt(delta)/2*a);
            x2=(-b+sqrt(delta)/2*a);
            printf("l'equation %dx^2+(%d)x+(%d) admet deux solutions.",a,b,c);
            printf("les deux solutions sont x1=%.2f et x2= %.2f",x1,x2);}
        else if(delta=0){
            x1=(-b/2*a);
            printf("l'equation %dx^2+(%d)x+(%d) admet une seule solution.",a,b,c);
            printf("la solution est x=%.2f",x1);}
            else 
            printf("l'equation %dx^2+(%d)x+(%d) n admet aucune solution.",a,b,c);

    
    }
