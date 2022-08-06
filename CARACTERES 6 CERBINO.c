/*6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.*/

#include <stdio.h>
#include<string.h>  // incluyo libreria//

char devuelvo_letra();
const char alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; //defino alfabeto en mayuscula //
int contador[26] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0}; // contador de cantidad de veces que se repiten las letras //
int i, j;

int main()
{

    char palabra[200]; // STRING //


    printf("Ingresar palabra: "); // Pido al usuario el string //
    scanf("%s" ,palabra);



    for(i=0; i < strlen(palabra);i++) // recorro con el for caracter por caracter que compone el string, me ayudo con strlen para obtener la cantidad de caracteres que tiene la variable palabra //
    {

        for(j=0; j < 26; j++){

           if(palabra[i] == alfabeto[j]){

               contador[j]++;

           }

        }


    }


    printf("La letra que se repitio mayor cantidad de veces es: %c",devuelvo_letra());
}


char devuelvo_letra(){

    char contador_de_letra;
    char letra;

    for(i=0 , contador_de_letra=contador[0] ,letra = alfabeto[0]; i<26 ; i++ ){

       if(contador_de_letra < contador[i]){ // el contador_de_letra adhiere la mayor cantidad de veces que se repitio la letra

           contador_de_letra = contador[i];
           letra = alfabeto[i];

       }

    }

    return letra; // retorna la letra que mas veces se repitio //
}