#include <stdio.h>


void modificarArreglo(int [], int);

int main(int argc, char const *argv[])
{
    int arreglo [5] = {1,2,3,4,5};
    modificarArreglo(arreglo,5);

    int x;
    for(x=0; x<5;x++){
        printf("%d,",arreglo[x]);
    }


    return 0;
}


void modificarArreglo(int arreglo[], int tam){

    int x;
    for(x=0; x<tam;x++){
        arreglo[x] = arreglo[x]*3;
    }

}