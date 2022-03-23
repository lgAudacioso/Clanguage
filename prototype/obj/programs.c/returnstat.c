#include <stdio.h>
#include <stdlib.h>

double cubo (double num){
    //double resultado = num * num * num;
    return num * num * num; //resultado;
}

int main () {

    printf ("Resposta: %f", cubo (2.0));

    return 0;
}