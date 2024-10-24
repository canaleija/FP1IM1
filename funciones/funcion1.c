#include <stdio.h>

// definir la funcion saludar
void saludar();
float calcula_promedio(float, float, float);

int main()
{
   // llamar la funcion calcula_promedio
    // argumentos
   float res = calcula_promedio(2,7,12.8);
   printf("%f\n",res);
    res = calcula_promedio(112,7.8,12.821);
    printf("%f\n",res);
    return 0;
}

// función que salude con un hola en consola

void saludar(){
    printf("Hola\n");

}

// funcion que me regrese el promedio de 3 valores flotantes

float calcula_promedio(float a, float b, float c){
    return  (a+b+c)/3;
}
