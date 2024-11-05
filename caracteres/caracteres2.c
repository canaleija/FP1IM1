#include <stdio.h>


// prototipo o definición de función
int busquedaConteo (char[], char);

int main()
{
    char cadena[] = "Holaaaaaaas!        ";
    int aux = busquedaConteo(cadena,' ');
    printf("%d\n",aux);


    return 0;
}

int busquedaConteo (char cadena[], char caracter){
    // "hola"
    // recorrido de la cadena con un while
    char aux = cadena[0];
    int contador = 0, i = 0;
    while(aux!='\0'){
        if(aux==caracter){
            contador++;
        }
        i++;

        aux = cadena[i];

    }
return contador;

}

