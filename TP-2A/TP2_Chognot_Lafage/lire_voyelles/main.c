#include <stdlib.h>
#include <stdio.h>

int main(void){
	//On definit le pointeur fichier
	FILE* fichier = NULL;
	//On ouvre le fichier voyelles.txt dans le pointeur fichier
	fichier = fopen("voyelles.txt","r");
	//On s'assure que l'ouverture a fonctionne
	if (fichier == NULL){
		printf("Echec a l'ouverture du fichier\n");
		exit(0);
	}
	//On liste toutes les voyelles dans un tableau
	char voyelles[]="aeyuioAEYUIO";
	int i = 0;
	int j = 0;
	int nbr_voyelles=0;
	//On utilise un DoWhile car on doit pouvoir lire au moins un caractere dans le fichier
	do
	{
		//On donne a i la valeur du caractere a la position courante
		i = fgetc(fichier);
		//On verifie si i est egal a une des voyelles du tableau
		for (j=0; j<12; j++){
			if (i == voyelles[j]){
			//Si oui, on incremente le nombre de voyelles dans le fichier
			nbr_voyelles++;
			}
		}
 
	} while (i != EOF);
	//On affiche le nombre de voyelles
	printf("Le nombre de voyelles est %d\n", nbr_voyelles);
	//On ferme le fichier
	fclose(fichier);
	return 0;
}


