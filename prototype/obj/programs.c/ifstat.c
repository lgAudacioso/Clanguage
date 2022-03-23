#include <stdio.h>
#include <stdlib.h>

int max (int num1, int num2, int num3){
    int resultado;

    if (num1 >= num2 && num1 >=num3){
        resultado = num1;
    } else if (num2 >= num1 && num2 >=num3){
        resultado = num2;
    } else {
        resultado = num3;
    }
    
    return resultado;
}

int main () {
    
    if (3 < 2 || 2 > 5){              //&& as duas condições tem que ser verdadeiras.
        printf ("Verdadeiro"); 
    } else {
        printf ("Falso");
    }
    //printf ("%d", max (40,10, 80));

    return 0;
}