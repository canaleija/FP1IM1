#include <stdio.h>

void modificar (int*, int x);
void aux(int, int);


int main()
{
    
    int x = 97;

    printf("%d\n",x);

    aux(34,100);
    
    
    printf("%d\n",x);



    return 0;
}

void modificarReferencia(int *p, int x){

    *p = x;
}

void aux(int j, int x){

    j = x;
}