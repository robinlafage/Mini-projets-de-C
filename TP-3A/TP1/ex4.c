#include <stdio.h>
int main() {
  int i, j, k, l;
  i = j = k = l = 0;
  while(i < 9) {
    printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n", i++, ++j, k--, --l);
  }
  printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);
  return (0);
}
/*
++i et --i incremente et decremente respectivement immediatement
i++ et i-- incremente et decremente respectivement a l'iteration suivante
*/
