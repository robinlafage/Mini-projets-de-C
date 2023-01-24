#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int main(int argc, char* argv[]) {

  int T[100], nb;
  char *nomFichier, *nomFichier2;

  if (argc != 3) {
    printf("Format : ./ex1 <fichier de départ> <fichier d'arrivée> \n");
    exit(EXIT_FAILURE);
  }

  nomFichier = argv[1];
  nomFichier2 = argv[2];
  nb = lireDonnees(nomFichier, T);
  printf("Tableau non trié :\n");
  afficherTableau(T, nb);
  triABulles(T, nb);
  printf("Tableau trié :\n");
  afficherTableau(T, nb);
  enregisterDonnees(nomFichier2, T, nb);

  return 0;
}


int lireDonnees(char nomFichier[], int T[]) {
  FILE* fichier;
  fichier = fopen(nomFichier, "r");

  if (fichier==NULL) {
    printf("Fichier non trouvé\n");
    exit(EXIT_FAILURE);
  }

  int currentValue = 0;
  int i=0;
  while (!feof(fichier)) {
    fscanf(fichier, "%d", &currentValue);
    T[i] = currentValue;
    i++;
  }


  fclose(fichier);
  return i-1;
}

void afficherTableau(int T[], int nb) {
  for (int i=0; i<nb; i++) {
    printf("%d\n", T[i]);
  }
}

void triABulles(int T[], int nb) {
	//trie est un booleen qui indique si le tableau est trie
	int trie = 0;
	//position_tableau est notre variable de boucle et var_temp sert de stockage temporaire pour l'echange de valeur de deux variables
	int position_tableau;
	//On boucle tant que le tableau n'est pas trie (trie est initalise a 1 mais passe a 0 si on intervertit deux elements)
	while (trie == 0) {
		trie = 1;
		//On parcourt tout le tableau
		for (position_tableau = 0; position_tableau < nb - 1; position_tableau++) {
			//Si la valeur de la position actuelle est superieure a celle de la position suivante, on les echange et on passe trie a 0
			if (T[position_tableau] > T[position_tableau + 1]) {
				swap(&T[position_tableau], &T[position_tableau + 1]);
				trie = 0;
			}
		}
	}
}

void swap(int* a, int* b) {
	int var_temp;
	var_temp = *a;
	*a = *b;
	*b = var_temp;
}

void enregisterDonnees(char nomFichier[], int T[], int nb) {
  FILE* fichier;
  fichier = fopen(nomFichier, "w");

  if (fichier==NULL) {
    printf("Erreur pointeur nul\n");
    exit(EXIT_FAILURE);
  }

  for (int i=0; i<nb; i++) {
    fprintf(fichier, "%d ", T[i]);
  }

  fclose(fichier);
}
