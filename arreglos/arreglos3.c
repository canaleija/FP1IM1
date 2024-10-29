#include <stdio.h>


void modificarArreglo(int [], int);
void ordenarArreglo(int [], int);
// TODO: IMPLEMENTAR LA SIGUIENTES FUNCIONES
float calcularPromedio(float[], int); // return 
int calcularMenor(int[], int); // RETURN
int calcularMayor(int[], int); // RETURN

int main()
{
    int arreglo [] = {5,44,3,2,1,56,17,54,11,1};
    ordenarArreglo(arreglo,10);

    int x;
    for(x=0; x<10;x++){
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

void ordenarArreglo(int arreglo[], int tam){
    int temp,i,j;
    for(i=1;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(arreglo[j]>arreglo[j+1]){
                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }

}