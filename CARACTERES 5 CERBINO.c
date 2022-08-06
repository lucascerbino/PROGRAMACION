
/*5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.*/

#include <stdio.h>


char caracter;
int contador_min = 0;  // definimos algunas variables//
int contador_may = 0;

int main()

{



while((caracter = getchar()) != '\n' )      //establecemos una condicion a travez de un while//
    
    {
    
if(caracter == 'A' || caracter == 'E'|| caracter =='I' ||caracter =='O' ||caracter =='U' )
    {
        contador_may ++;
    }

if(caracter == 'a' || caracter == 'e'|| caracter =='i' ||caracter =='o' ||caracter =='u' )
    {
        contador_min ++;
    }
    	

    }                    // por ultimo a travez de un printf terminamos el programa//
	
	printf("la palabra ingresada tiene %d vocales  minusculas y %d vocales mayusculas",contador_min,contador_may);
    
}

