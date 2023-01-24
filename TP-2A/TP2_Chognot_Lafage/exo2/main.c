#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "bitmap.h"
int main() {
	FILE* transporteur = NULL;
	transporteur = fopen("transporteur.bmp", "r");
	FILE* source = NULL;
	source = fopen("source.txt", "w+");
	if (transporteur == NULL || source == NULL) {
		printf("Pointeur nul, erreur");
		exit(0);
	}

	//On cree les struct qui contiendront les deux entête des deux fichiers
	fichierEntete fichierEnteteTransporteur;
	imageEntete imageEnteteTransporteur;
	//On ouvre les deux entêtes de chaque fichier
	fread(&fichierEnteteTransporteur, sizeof(fichierEntete), 1, transporteur);
	fread(&imageEnteteTransporteur, sizeof(imageEntete), 1, transporteur);
	//On lit les derniers éléments des deux structures pour vérifier l'ouverture
	printf("offset transporteur : %hd\n",fichierEnteteTransporteur.offset);
	printf("nombreCouleursImportantes transporteur : %d\n",imageEnteteTransporteur.nombreCouleursImportantes);

	int puissances_deux[8] = { 1,2,4,8,16,32,64,128 };
	int readOctet;
	int insertedOctet = 0;
	int positionOctet = 7;

	while (fread(&readOctet, 1, 1, transporteur) != 0) {
		//printf("%d\n",readOctet%2);
		if (readOctet%2 == 1) {
			insertedOctet += puissances_deux[positionOctet];
		}
		if (positionOctet == 0) {
			printf("%d\n", insertedOctet);
			fwrite(&insertedOctet, 1, 1, source);
			//fputc(insertedOctet, source);
			printf("octet inséré\n");
			insertedOctet = 0;
			printf("%d\n",insertedOctet);
			positionOctet = 8;
		}
		positionOctet--;
	}

	//C'est Jon Postel

	fclose(transporteur);
	fclose(source);
	return 0;
}
