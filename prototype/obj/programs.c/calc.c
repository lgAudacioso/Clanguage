#include <stdio.h>
#include <stdlib.h>


int main () {
 
   double num1;
   double num2;
    //printf ("Coloque um numero:");
   //scanf ("%lf", &num1);
   //printf ("Coloque outro numero:");
   //scanf ("%lf", &num2);

  //printf ("Resposta: %f", num1 + num2);    

    char op;
    printf ("Coloque um numero:");
    scanf ("%lf", &num1);
    printf ("Escolha a operaçao:");
    scanf (" %c", &op);
    printf ("Coloque outro numero:");
    scanf ("%lf", &num2);

    if (op == '+'){
        printf ("%f", num1 + num2);
    } else if (op == '-'){
        printf ("%f", num1 - num2);
    } else if (op == '/'){
        printf ("%f", num1 / num2);
    } else if (op == '*'){
        printf ("%f", num1 * num2);
    } else {
        printf ("Erro: Operaçao Invalida");
    }

    
    return 0;
}