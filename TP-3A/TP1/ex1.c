#include <stdio.h>

int main() {
    char lettre;
    printf("Donnez une lettre entre A et E : \n");
    scanf("%c", &lettre);

    
    //if imbriqués
    if (lettre == 'A') {
        printf("Très bien\n");
    } else {
        if (lettre == 'B') {
            printf("Bien\n");
        } else {
            if (lettre == 'C') {
                printf("Assez bien\n");
            } else {
                if (lettre == 'D') {
                    printf("Passable\n");
                } else {
                    if (lettre == 'E') {
                        printf("Insuffisant\n");
                    }
                }
            }
        }
    }
    

    /*if non imbriqués
    if (lettre == 'A') {
        printf("Très bien\n");
    } 
    if (lettre == 'B') {
        printf("Bien\n");
    } 
    if (lettre == 'C') {
        printf("Assez bien\n");
    } 
    if (lettre == 'D') {
        printf("Passable\n");
    } 
    if (lettre == 'E') {
        printf("Insuffisant\n");
    }
    */


    /*switch
    switch (lettre) {
        case 'A': printf("Très bien\n"); break;
        case 'B': printf("Bien\n"); break;
        case 'C': printf("Assez bien\n"); break;
        case 'D': printf("Passable\n"); break;
        case 'E': printf("Insuffisant\n"); break;
    }
    */

    return 0;

    /*Si la lettre rentrée n'est pas de A à E, le programme n'affiche rien. */
}
