
/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include <stdio.h>

int numeros_palabra();   //declaro una funcion para poder utilizarla mas tarde//

int main()

{
char letras;

letras = numeros_palabra();    //llamo a la funcion//

printf("la palabra ingresada tiene %d letras",letras);

}


int numeros_palabra()  // aca vemos como se ejecuta la funcion //
{
char caracter;
int letras;

    
    for(letras=0;letras<20;letras++)
    
    {
    caracter = getchar();
    
    if(caracter =='\n'  || caracter == ' ' )  // si caracter es un espacio o un salto de linea o va a devolver letras//
    {
        return letras;
    }
}

return 20;

}