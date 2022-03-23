#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
    int main(){ 
     
     char cor [20];
     char substantivo [20];
     char pessoaP [20];   
     char pessoaS [20];   

    printf ("Coloque uma cor:");
    scanf ("%s", cor);
    printf ("Coloque um substantivo no plural:");
    scanf ("%s", substantivo);
    printf ("Coloque uma pessoa:");
    scanf ("%s%s", pessoaP, pessoaS);


    printf ("Rosas sao %s\n", cor);
    printf ("%s sao azuis\n", substantivo);
    printf ("Eu amo a %s %s\n", pessoaP, pessoaS);
    
    return 0;
    }

    