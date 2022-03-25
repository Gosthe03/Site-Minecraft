#include <stdio.h>

int main(void)
{


// Déclaration des variables
int business, invest, type1, type2, type3, rendement1, rendement2, rendement3;
// Introduction des données d'entrées
printf("Veuillez introduire le buisness a créer (1 pour site ecommerce, 2 pour agence marketing ou 3 pour buisness de formation): ");
scanf("%d",&business);
printf("Veuillez introduire le montant a investir: ");
scanf("%d",&invest);


if (business == 1)
{
    printf ("Veuillez introduire le le type d ecommerce (1 pour produit de sport, 2 pour produits de jardin ou 3 pour bijoux)");
    scanf ("%d",&type1);
    if (type1 == 1)
    {
        rendement1 = invest/100*35;
        printf("le rendement est de %d", rendement1 );
    }
    if (type1 == 2)
    {
        rendement1 = invest/100*40;
        printf("le rendement est de %d", rendement1 );
    }
    if (type1 == 3)
    {
        rendement1 = invest/100*50;
        printf("le rendement est de %d", rendement1 );
    }
}

if (business == 2)
{
    printf ("Veuillez introduire le type d agence marketing (1 pour service SEO, 2 pour Community Management ou 3 pour Campagne d’acquisition payante: ");
    scanf ("%d",&type2);
    if (type2 == 1)
    {
        rendement2 = invest/100*60;
        printf("le rendement est de %d", rendement2 );
    }
    if (type2 == 2)
    {
        rendement2 = invest/100*60;
        printf("le rendement est de %d", rendement2 );
    }
    if (type2 == 3)
    {
        rendement2 = invest/100*60;
        printf("le rendement est de %d", rendement2 );
    }
}

if (business == 3)
{
    printf ("Veuillez introduire le type de buisness de formation (1 pour formation SEO, 2 pour formation developpement personnel  ou 3 pour formation fitness : ");
    scanf ("%d",&type3);
    if (type3 == 1)
    {
        rendement3 = invest/100*55;
        printf("le rendement est de %d", rendement3 );
    }
    if (type3 == 2)
    {
        rendement3 = invest/100*40;
        printf("le rendement est de %d", rendement3 );
    }
    if (type3 == 3)
    {
        rendement3 = invest/100*70;
        printf("le rendement est de %d", rendement3 );
    }
}



}





