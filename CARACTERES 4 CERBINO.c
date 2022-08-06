/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int numeros_palabra();   //declaro una funcion//

int main()

{
    int letra_min;

letra_min= numeros_palabra();    //llamo a la funcion creada anteriormente//

printf("la palabra ingresada tiene %d letra a minuscula",letra_min);

}


int numeros_palabra()  // aca vemos como se ejecuta la funcion y a diferencia del otro codigo 1 que es casi identico utilizo un while en vez de un for//
{
char caracter;
int letras;
int contador = 0;

    
    while((caracter = getchar()) != '\n' )  //establemos una condicion//
    
    {
    
if(caracter == 'a'  )   // aca vemos que cada vez que se ingrese l letra a minuscula el contador va a incrementar//
    {
        contador ++;
    }
}

return contador;

}