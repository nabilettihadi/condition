#include<stdio.h>
#include<stdlib.h>

void main ()
{   float note;

    start:
    printf("Entrer une note:\n");
    scanf("%f",&note);

        if (note>=0 && note<10)
            {printf("Recale\n");}  

        else if (note>=10 && note<12)
            {printf("Passable\n");} 
        
        else if(note>=12 && note<14)
            {printf("Assez Bien\n");}
    
        else if(note>=14 && note<16)
            {printf("Bien\n");}
            
        else if (note>=16 && note<=20)
            {printf("Tres Bien\n");}
        else {
            printf("note incorrecte\n");
            goto start;
        }
          
}