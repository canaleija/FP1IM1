#include <stdio.h>

int main()
{
   
    int arreglo[3]={4,5,6};
    // %p direcciones de memoria

    *(&arreglo[1]-0x1) = 45;
    printf("%d\n",*(&arreglo[1]-0x1));
   // printf("%d\n",&arreglo[1]);
   // printf("%d\n",&arreglo[2]);


    return 0;
}
