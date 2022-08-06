/*8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.
*/

#include <stdio.h>
#include <string.h>   //incluyo libreria string//

int main()
{
    char aux[200];
    char str[200];
    const char password[4] = {'F' , 'I' , 'N' , '\0'};  //cree flag de finalizacion//



    while(strcmp(aux,password) != 0) //creo bucle hasta que se ingrese la palabra FIN// 
    {
        printf("ingresar nombre de la persona: ");
        scanf("%s",aux);

        if(strcmp(aux,password) != 0){

            if(strcmp(aux,str)<0)
            {
                strcpy(str,aux);//copio lo que hay en aux a str//
            }

        }


    }

    printf("En orden alfabetico,el primer nombre es: %s",str); //muestro el string en pantalla//


}