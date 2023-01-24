#include <stdio.h>

float valeurPolynome(float A[], int N, float x0){
  float sum = 0;
  for (int i = N-1; i > 0; i--) {
    sum = (sum + A[i]) * x0;
  }
  sum += A[0];
  return sum;
}

int main(int argc, char const *argv[]) {
  float A[4] = {1.0, 3.0, 5.0, 6.0};
  int N = 4;
  float x0 = 2;
  printf("Le résultat est : %f\n",valeurPolynome(A, N, x0));
  return 0;
}

/*
On teste avec le polynome du sujet 6x3 + 5x² + 3x + 1, pour x0=1, x0=2 et x0=3
On obtient le bon résultat
*/
