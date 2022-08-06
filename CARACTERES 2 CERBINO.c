/*2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/

#include <stdio.h>


int main()
{
int posicion_inicial;      //creamos algunas variables//
int posicion_final,contador;
char palabra[4];   // creamos un vector, el tamaño de este vector va a ser la cantidad de letras en la palabra a ingresar//
char caracter,aux;
int i;

i=0;
printf("\ningrese la palabra:");
scanf("%c",&caracter);

while (i<4 && caracter!= ' ')   // establecemos una condicion//
{
    palabra[i] = caracter;
    i++;
    scanf("%c",&caracter);
}
 
 posicion_inicial = 0;
 posicion_final = i-1;  // aca a i le resto uno ya que no me interesa estudiar ese caracter sino el ultimo caracter de la palabra//

while(posicion_inicial<posicion_final)    // establecemos una nueva condicion con otro while y lo que hacemos es guardar la primer letra del vector en la variable aux,y establecemos que en la poicion inicial "que es donde estaba la primer letra este la ultima" y por ultimo decimos que la final sea igual a la que guardamos en la variable//
{
    aux = palabra[posicion_inicial];
    
    palabra[posicion_inicial] = palabra[posicion_final];
    palabra[posicion_final] = aux;
    posicion_inicial++;
    posicion_final--;
    
}

for(contador=0;contador<i;contador++)
{
    printf("%c",palabra[contador]);
}
}
