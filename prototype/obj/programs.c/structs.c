#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante{
    char nome[50];
    char major[50];
    char idade;
    double nota;
    

};

int main (){

struct Estudante estudante1;
estudante1.idade= 22;
estudante1.nota=3.2; 
strcpy( estudante1.nome, "Doidera");
strcpy( estudante1.major, "Loucão");

printf ("%s\n", estudante1.nome);

struct Estudante estudante2;
estudante2.idade= 53;
estudante2.nota=4.9; 
strcpy( estudante2.nome, "Malucão");
strcpy( estudante2.major, "Pepe");

printf ("%s\n", estudante2.nome);
    return 0;
}