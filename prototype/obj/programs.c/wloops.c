#include <stdio.h>
#include <stdlib.h>

//int main (){

    //int index = 1;
    //while (index <= 5){
       //printf ("%d\n", index);
       //index++; //= index + 1;
    //}


    //return 0;
//}


int main (){

    int numeroSecreto = 4;
    int chute;
    int chutes = 0;
    int chuteLimite = 3;
    int semchutes = 0;

     while (chute != numeroSecreto && semchutes == 0){
         if(chutes < chuteLimite){
         printf ("Coloque um numero:");
         scanf ("%d", &chute);
         chutes++;
         } else {
             semchutes = 1;
         }

     }
     if (semchutes ==1){
         printf ("Sem chutes");
     }else{
         printf ("Acertou zimbao");
     }
    


    return 0;
}