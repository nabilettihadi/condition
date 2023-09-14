#include <stdio.h>

void main() {
    int annee, choix;
    int mois, jours, heures, minutes, secondes;

    printf("Entrez le nombre des annees a convertir : ");
    scanf("%d", &annee);

    printf("Menu de conversion:\n");
    printf("1. En mois\n");
    printf("2. En jours\n");
    printf("3. En heures\n");
    printf("4. En minutes\n");
    printf("5. En secondes\n");
    printf("Choisissez une option (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d annees correspondent a %d mois.\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annees correspondent a %d jours.\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d annees correspondent a %d heures.\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d annees correspondent a %d minutes.\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365 * 24 * 60 * 60;
            printf("%d annees correspondent a %d secondes.\n", annee, secondes);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

}