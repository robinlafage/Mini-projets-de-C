#include <stdio.h>
int main() {
  int nbr_1, nbr_2, a, b, r;
  printf("Entrer un premier nombre : ");
  scanf("%d", &nbr_1);
  printf("Entrer un deuxième nombre : ");
  scanf("%d", &nbr_2);
  a = nbr_1;
  b = nbr_2;
  do {
    r = a % b;
    a = b;
    b = r;
  } while(b != 0);
  printf("Le PGCD de %d et %d est %d\n", nbr_1, nbr_2, a);
}

//Test : le PGCD de 200 et 30 est 10
