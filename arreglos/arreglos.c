#include <stdio.h>

int main(int argc, char const *argv[])
{
   
   int n = 5;
   int arreglo [n]; // pc pueda asignar un espacio en memoria, 

   // subindice  0,1,2,3,n-1
   /*
   arreglo[0]= 7;
   arreglo[1]= 1;
   arreglo[2]= 7;
   arreglo[3]= 34;
   arreglo[4]= 27;*/
   int i;
   for(i=0; i<n;i++){
    arreglo[i] = i * 17;
   }

   for(i=0; i<n;i++){
    printf("%d,",arreglo[i]);
   }




    return 0;
}

