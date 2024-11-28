#include <stdio.h>
#include <string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;

};


struct Persona
{
    char nombre[50];
    int edad;
    float altura;
    struct fecha fech_nac;
};

void modificar (struct Persona []);

int main()
{
    struct Persona juan;
    struct Persona lupe;

    strcpy(juan.nombre,"Juan Alberto");
    strcpy(lupe.nombre,"Laura Guadalupe");
    juan.edad = 50;
    juan.altura = 1.98;
    juan.fech_nac.dia = 24;
    juan.fech_nac.mes = 12;
    juan.fech_nac.anio = 0;



    lupe.altura = 2.10;
    lupe.edad = 21;

    struct Persona grupo []={juan,lupe};

    modificar(grupo);

    printf("%d\n",lupe.edad);
    printf("%d\n",grupo[0].fech_nac.dia);


    return 0;
}


void modificar (struct Persona aux []){
    aux[1].edad = 100;

}