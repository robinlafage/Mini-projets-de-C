#include <stdlib.h>
#include <stdio.h>

int main(void) {
	//On definit le pointeur fichier
	FILE* fichier = NULL;
	//On ouvre le fichier dans le pointeur fichier
	fichier = fopen("nombres_impairs.txt", "w");
	//On teste que l'attribution a fonctionnee
	if (fichier == NULL) {
		printf("Impossible d'ouvrir le fichier\n");
		exit(0);
	}
	int i=0;
	int nombre = 1;
	//On boucle 100 fois
	while (i < 100) {
		fprintf(fichier, "%d ", nombre);
		nombre += 2;
		i++;
	}
	//On ferme le fichier
	fclose(fichier);
	return 0;
}
