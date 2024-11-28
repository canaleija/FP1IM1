#include <stdio.h>
#include <string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
};
struct ciudadano
{
    char nombre_completo[40];
    char a_paterno[20];
    char a_materno[20];
    struct fecha fecha_nac;
    char edo_nac [25];
    char sexo;
    char curp [30];

    /* data */
};


int main()
{
    struct ciudadano beto;

    strcpy(beto.nombre_completo,"Roberto Oswaldo");
    strcpy(beto.a_paterno,"Cruz");
    strcpy(beto.a_materno,"Leija");
    beto.fecha_nac.dia = 29;
    beto.fecha_nac.mes = 7;
    beto.fecha_nac.anio = 2003;
    beto.sexo = 'H';
    strcpy(beto.edo_nac,"ZACATECAS");
    // tarea
    beto.curp = // funcion (ciudadano)



    return 0;
}
