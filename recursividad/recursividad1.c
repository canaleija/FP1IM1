#include <stdio.h>

void prueba(int);

int main()
{
   prueba(5);
    return 0;
}


void prueba(int n){
    if(n>1){
        printf("Hola\n");
        n = n -1;
        prueba(n);
    } else{
         printf("Hola\n");
        
    }

}