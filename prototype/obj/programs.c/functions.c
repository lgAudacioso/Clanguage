#include <stdio.h>
#include <stdlib.h>

int main (){
    zimba ("Luiz", 3900);
    zimba ("Aline", 1245);
    zimba ("Erick", 1000);
    
    return 0;
}

void zimba ( char nome [], int idade){
    printf ("Dae %s! Voce tem %d anos\n", nome, idade);
    
}