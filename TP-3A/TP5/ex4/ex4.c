#include <stdio.h>
#include <stdlib.h>

//Code by Somchay
//Jamais compilé, bugs potentiels

void initListe(int L[], int taille){
  L[0]=taille;
  L[1]=0;
  for (int i = 2; i < taille; i+=2) {
      L[i]=-1;
  }
}

int elementLibre(int L[]){
  int i = 2;
  int element = 0;
  int taille =L[0];
  while (i < taille) {
    if (L[i]%2 == 0 && L[i+1]==-1) {
      element=L[i];
    }
    i++;
  }
  return element;
}

void afficherListe(int L[]){
  int suivant = L[1];
  if (suivant==0) {
    printf("Liste vide");
  }
  while (suivant!=0) {
    printf("%d\n",L[suivant]);
    suivant=L[suivant+1];
  }
}
void inserer(int x, int *L){
  int libre=elementLibre(L);
  int tmp;
  L[libre]=x;
  int suivant=L[1];
  if(suivant==0){
    L[1]=2;L[2]=x;L[3]=0;
  }
  else if (L[suivant]>x){
    L[libre+1]=suivant;
    L[1]=libre;
  }
  else{
    while(L[suivant+1]!=0 && L[L[suivant+1]]<x){
      suivant=L[suivant+1];
    }
    tmp=L[suivant+1];
    L[suivant+1]=libre;
    L[libre+1]=tmp;
  }
}

void supprimer(int i,int L[]){
  int suivant = L[1];
  int compte = 0;
  int delete;
  if (i==0) {
    L[1]=L[suivant+1];
    L[suivant+1]=-1;
  }
  else{
    while (compte < i-1) {
      suivant = L[suivant+1];
      compte++;
    }
    delete=L[suivant+1];
    L[suivant+1]=L[delete+1];
    L[delete+1]=-1;
  }
}
