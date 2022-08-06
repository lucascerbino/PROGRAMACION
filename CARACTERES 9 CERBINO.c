/9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano./

#include <stdio.h>
#include<string.h>  // incluyo libreria//


int main()
{

    char string[10]; //creo vector de 10 string//
    int i;
    printf("escribir palabra a cambiar: ");

    for(i=0;i<10;i++)    //la palabra va a ser de maximo 10 letras//

    {
        if((string[i]=getchar()) == 10)  // al mandar a la entrada un enter rompe el bucle//
        break;


    //condiciones a aplicar en las letras x,y,z y X,Y,Z//

    else if(string[i]==120) // letra 'x'//

        string[i]=97;

    else if(string[i]==121)// letra 'y'//

        string[i]=98;


    else if(string[i]==122)// letra 'z'//

        string[i]=99;

    else if(string[i]==88)// letra 'X'//

        string[i]=65;

    else if(string[i]==89)// letra 'Y'//

        string[i]=66;

    else if(string[i]==90)// letra 'Z'//

        string[i]=67;

    else
    {
        string[i] += 3;    //le sumamos 3 posiciones en referencia a la tabla ascii//
    }
    }

    printf("la palabra transformada es: %s\r",string);

    printf("                              ");   //agrego este printf por tener un problema de impresion de caracteres especifico//


}
