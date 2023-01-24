#include <stdlib.h>
#include <stdio.h>

typedef struct element element ;
struct element {
int valeur ; /* valeur de l’élément */
element* suivant ; /* adresse du successeur */
};

typedef element* liste ;

void afficherListe(liste *l){
    if (l == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element *actuel = l;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->valeur);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

void insererElement(int x, liste *l){
    liste adresse = *l;
    element *nouveau = (element* ) malloc(sizeof(element));
     if (l == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->valeur = x;

    if (adresse->valeur < x){
        nouveau->suivant = adresse;

    }

    while ((adresse->valeur) > x)
    {
        adresse = adresse->suivant;
        l=nouveau;
    }

    liste suivant_temp = adresse->suivant;
    adresse->suivant = nouveau;
    nouveau->suivant = suivant_temp;
}

void supprimerElement(int i, liste *l){

}

int main(int argc, char const *argv[])
{
    int valeur_insertion;
    liste l = NULL ;
    element *element_init = malloc(sizeof(*element_init));

    if (element_init == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element_init->valeur = 0;
    element_init->suivant = NULL;
    l = element_init;

    for (int i = 0; i < 10; i++)
    {
        printf("Entrer une valeur à inserer : ");
        scanf("%d",&valeur_insertion);
        insererElement(valeur_insertion,l);
    }
    

    return 0;
}
