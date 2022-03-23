#include <stdio.h>
#include <stdlib.h>


int main () {

    char nota;
     printf ("Coloque sua nota:");
     scanf (" %c", &nota);

    switch (nota) {
    case 'A':
        printf ("Parabens zimbao!");
        break;
    case 'B':
        printf ("Foi bem zimbao!");
        break;
    case 'C':
        printf ("Melhora zimba!");
        break;
    case 'D':
        printf ("Quase zimba!");
        break;
    case 'F':
        printf ("Reprovou zimbao");
        break;
    default:
        printf ("Nota invalida");
        

    }

    return 0;   
}