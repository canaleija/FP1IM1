/*
dado un int por el usario
determinar si el valor ingresado es un valor
par
- si lo es: mostrar mensaje que diga
"x es un numero par"
- en caso contrario 
"x es un numero impar"

H: scanf  / stdio
if else
variables
modulo  %
*/


/*
scanf("conversores", Donde?)

stdio

* &
int x,y;
scanf("%d %d",&x,&y);

*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int res = x%2;
    // si(if) res == 0 por lo tanto x es par / else impar

    if (res == 0){

        printf("%d es par\n",x);
    } else{
        printf("%d es impar\n",x);

    }
    
    /* code */
    return 0;
}
