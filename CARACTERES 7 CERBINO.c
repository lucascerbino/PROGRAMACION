/*7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.*/

#include <stdio.h>
#include<string.h>   //implementamos nueva libreria//


int main()
{
    
    int i;
    char nombre_del_mas_joven[250]; 
    char auxiliar[250];                                 //en esta variable se van a ir guardando los nombres ingresados//
    int anios_del_mas_joven;   
    int anios_auxiliar;
    
    
    for(i=0;i<=2;i++)                                                   // a travez de este for vamos ingresando los nombres//
    {
        printf("\ningrese el nombre de la persona N%d:",i+1);
        scanf("%s",auxiliar);
        
        printf("\ningrese la edad de la persona N%d:",i+1);
        scanf("%d",&anios_auxiliar);
        
        if(i==0)
        
        anios_del_mas_joven=anios_auxiliar;   //le asigno un valor en el primer ciclo for a  anios_del_mas_joven//
        
        
        if(anios_auxiliar < anios_del_mas_joven)
        {
            anios_del_mas_joven = anios_auxiliar;
            strcpy(nombre_del_mas_joven,auxiliar);  //copio lo que esta guardado en auxiliar en la variable nombre_del_mas_joven//
        }
    }
    
    
    printf("la persona mas joven es llamada: %s",nombre_del_mas_joven); 
    
    
}
