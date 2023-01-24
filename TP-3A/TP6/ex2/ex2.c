#include <stdio.h>
#include <string.h>

int fibonacci (int n) {
  switch (n) {
    case 0: return 0;
    case 1: return 1;
    default: return (fibonacci (n-1) + fibonacci (n-2));
  }
}

int pgcd(int a, int b){
  if (b==0) {
      return a;
  } else {
      return pgcd(b, a%b);
  }
}

int palindrome (char *mot, int longueur){
  if (longueur == 1 || longueur == 0) {
    return 1;
  } else if(mot[0] != mot[longueur-1]) {
    return 0;
  } else {
    return palindrome(mot+1,longueur-2);
  }
}

int main(int argc, char const *argv[]) {
  char mot[30];
  printf("Entrer un mot : ");
  scanf("%s",mot);
  if (palindrome(mot, strlen(mot)) == 0){
    printf("Ce mot n'est pas un palindrome\n");
  } else {
    printf("Ce mot est un palindrome\n");
  }
  /*int a,b;
  printf("Entrer la valeur des deux nombres format a,b: ");
  scanf("%d,%d",&a,&b);
  printf("Le PGCD de %d et %d est %d\n",a,b,pgcd(a,b));
  */
  /*
  int n;
  printf("Indice pour calcul : ");
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    printf("%d\n",fibonacci(i));
  }
  */
  return 0;
}

/*
if (n == 0) {
   return 0;
 } else if (n == 1) {
   return 1;
 } else {
   return (fibonacci (n-1) + fibonacci (n-2));
}
*/
