#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	FILE* transporteur = NULL;
	FILE* source = NULL;
	transporteur = fopen("transporteur.txt", "r");
	source = fopen("source.txt", "w");
	int puis[8] = { 128,64,32,16,8,4,2,1 };
	if ((transporteur != NULL) && (source != NULL)) {
		char a;
		int c = 0;
		int lettre;
		int compt = 0;
		do {
			a = fgetc(transporteur);
			if (isalpha(a)) {
				if (isupper(a) && compt < 8) {
					lettre += puis[compt];
				}
				compt++;
				if (compt == 8) {
					fputc(lettre, source);
					lettre = 0;
					compt = 0;
				}
			}
			c = c + 1;
		} while (a != EOF);
		printf("%d\n", c);
		fclose(transporteur);
		fclose(source);
	}
	else {
		printf("imossible d'ouvrir");
	}
	return 0;
}

