#include <stdio.h>
int main(int argc, char * argv[]) {
  int i;
  printf("Nombre d'arguments : %d\n", argc);
  for(i = argc-1 ; i > 0 ; i--) {
    printf("%s\n", argv[i]);
  }
  return 0;
}

/*
Si on demande './ex3 x y', on obtient :
'Nombre d'arguments : 3
y
x'
Autrement dit, on peut récupérer dans le code les arguments passés en ligne de commande
*/
