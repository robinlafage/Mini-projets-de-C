#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
	FILE* transporteur = NULL;
	transporteur = fopen("transporteur.txt", "r");
	FILE* source = NULL;
	source = fopen("source.txt", "w+");
	if (transporteur == NULL || source == NULL) {
		printf("Pointeur nul, erreur");
		exit(0);
	}
	int puissances_deux[8] = { 1,2,4,8,16,32,64,128 };
	char currentChar;
	int insertedOctet = 0;
	int positionOctet = 7;
	do {
		currentChar = fgetc(transporteur);
		if (isalpha(currentChar)) {
			if (isupper(currentChar)) {
				insertedOctet += puissances_deux[positionOctet];
			}
			if (positionOctet == 0) {
				//printf("%d\n", insertedOctet);
				fputc(insertedOctet, source);
				//fprintf(source, "%c\n", insertedOctet);
				insertedOctet = 0;
				positionOctet = 8;
			}
			positionOctet--;
		}
	} while (currentChar != EOF);
	fclose(transporteur);
	fclose(source);
	return 0;
}

