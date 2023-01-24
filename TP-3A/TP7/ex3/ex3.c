#include <stdlib.h>
#include <stdio.h>

void drapeau_hollandais(int*, int);
void echanger(int*, int, int);
void afficher_tab(int*, int);

int main() {

  int tab[] = {5,8,1,4,3,9,2,7,3,8,1,4,5,3,8};
  int taille = sizeof(tab)/sizeof(int);
  drapeau_hollandais(tab, taille);
  afficher_tab(tab, taille);
  return 0;
}

void drapeau_hollandais(int* tab, int taille) {
  int b=0, w=0, r=taille-1;

  while (w<=r) {
    if (tab[w] >= 3 && tab[w] <= 6) {
      w++;
    } else if (tab[w] < 3) {
      echanger(tab, b, w);
      b++;
      w++;
    } else {
      echanger(tab, w, r);
      r--;
    }
  }
}

void echanger(int* tab, int a, int b) {
  int tmp;
  tmp = tab[a];
  tab[a] = tab[b];
  tab[b] = tmp;
}

void afficher_tab(int* tab, int taille) {
  for (int i=0; i<taille; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}
