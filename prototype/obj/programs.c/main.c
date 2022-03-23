#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (0, "Portuguese");

    char nomeTest [] = "Aline";
    int numeroTest = 8;

    printf("a %s é a coisa mais linda do universo.\n", nomeTest);
    printf("Ela também é a %d maravilha do mundo.\n", numeroTest);

    numeroTest = 2;
    printf("Além da %s ser a mais gostosa de todas.\n", nomeTest);
    printf("Eu amo muito ela, é tipo pegar o infinito e quadriplicar e depois multiplicar por %d e depois por um zilhão!\n", numeroTest);


    printf("______________________________________________\n");


    int idadeTeste = 33;                                  //int usado para números (%d)
    double idade = 33.33;                                //double usado para decimais (%f)
    char letraTeste = 'A';                              //char usado para frases e para uma única letra (%c para letra e $s para frases)
    char fraseTeste [] = "eu amo ela";                  //char usado para frases e para uma única letra (%c para letra e $s para frases)


    printf("Sério, %s \n", fraseTeste);
    printf ("Eu gosto do número %d\n", idadeTeste);
    printf ("O número %f é o número mais doidão do mundo\n", idade);    //%s para frases, %d para números, %f para números decimais (com vírgulas) //
                                                                        //e %c para letras isoladas
    printf ("%c Aline é o amor da minha vida\n", letraTeste);


    printf("_______________________________________________\n");


    int favnumero = 33;
    printf ("Meu %s favorito é o %s %d\n", "número","número", favnumero);

    printf("_______________________________________________\n");


    printf ("O moce é um viadinho que o da cu para o lula na botinha kkkkkkkkkkkkviado do caralho\n");
    printf ("O Erick é gay kkkkkkkkkkkkkkkkkkkkkkkkkkkfalo mesmo\n");


    double numbertest = 99.999;      //double usado para decimais (%f)
    char lettertest = 'P';             //char usado para frases e para uma única letra (%c para letra e $s para frases)

    printf ("o número %f e a letra %c é uma letra bem doida\n", numbertest, lettertest);



     printf("_______________________________________________\n");


    printf ("%f\n", 5 / 4.0);                    // *, +, -, /
    printf ("%f %f\n", pow(4,3), pow(2,3) );    //pow = elevar (em ordem) 2^3 ou 4^3
    printf ("%f\n", sqrt(9));                  //sqrt = raíz quadrada
    printf ("%f\n", ceil(64.774));            //ceil = próximo maior inteiro
    printf ("%f\n", floor(64.774));          //floor = próximo menor inteiro
    printf ("%d\n", abs(-12));              //abs = da o valor inteiro;


    /* Para adicionar comentários */
    printf("_______________________________________________\n");

    const int NUM = 5;                    //const = constante, ou seja, não pode ser alterada
    printf("%d\n", NUM);


    printf("_______________________________________________\n");

    int age;
    printf("Coloque sua idade:\n");
    scanf("%d", &age);                        //& para o user //scanf = deixa o user colocar
    printf ("Você tem %d anos\n", age);

    double dms;
    printf("Coloque seu dia mês de nascimento:\n");     //%lf em scanf
    scanf ("%lf", &dms);
    printf ("Você nasceu no dia e mês: %f\n", dms);

    return 0;
}








