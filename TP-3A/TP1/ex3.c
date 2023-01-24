#include <stdio.h>

int main() {
    int n;
    int i=0;
    printf("Entrez un nombre\n");
    scanf("%d", &n);

    /*
    while (n>0) {
        i=i+n;
        n--;
    }
    */

    do {
        i=i+n;
        n--;
    } while (n>0);

    printf("%d\n",i);

    return 0;
    
    /* Si la valeur rentrée est négative, le programme affiche cette valeur*/

}