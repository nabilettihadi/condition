#include<stdio.h>

void main ()
{   int j,m,a;
start:
    printf("Entrer une date:\n");
    scanf("%d/%d/%d",&j,&m,&a);

    switch (m)
    {
    case 01:
        printf("date:%d/Janvier/%d\n",j,a);
        break;

    case 02:
        printf("date:%d/Fevrier/%d\n",j,a);
        break;

    case 03:
        printf("date:%d/Mars/%d\n",j,a);
        break;

    case 04:
        printf("date:%d/Avril/%d\n",j,a);
        break;

    case 05:
        printf("date:%d/Mai/%d\n",j,a);
        break;

    case 06:
        printf("date:%d/Juin/%d\n",j,a);
        break;
        
    case 07:
        printf("date:%d/Juillet/%d\n",j,a);
        break;

    case 8:
        printf("date:%d/Aout/%d\n",j,a);
        break;

    case 9:
        printf("date:%d/September/%d\n",j,a);
        break;

    case 10:
        printf("date:%d/October/%d\n",j,a);
        break;

    case 11:
        printf("date:%d/November/%d\n",j,a);
        break;

    case 12:
        printf("date:%d/December/%d\n",j,a);
        break;
    
    default:
       goto start; break;
    }
}