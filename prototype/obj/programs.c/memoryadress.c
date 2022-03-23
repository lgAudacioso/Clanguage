#include <stdio.h>
#include <stdlib.h>


int main (){
     
    int idadeTeste = 33;                                  //int usado para números (%d)
    double idade = 33.33;                                //double usado para decimais (%f)
    char letraTeste = 'A';

    printf ("idade: %p\n idadedois: %p\n letrabemlegal: %p\n", &idadeTeste, &idade, &letraTeste); //%p memory adress



    return 0;
}