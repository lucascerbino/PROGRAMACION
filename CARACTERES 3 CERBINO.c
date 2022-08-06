/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.*/


#include <stdio.h>


int Compara (char s1[100], char s2[100]){
    int i;
    for(i=0;(s1 [i]==s2[i]) &&(s1 [i] != '\0') && (s2[i] != '\0') ; i++); 
    return (s1[i]-s2[i]);
}
 
int main(){
	int Resultado;
    char a[100];
    char b[100];
    
         printf("Ingrese el primer string: ");	//Utilizo printf y scanf.
         scanf("%s", &a);
         printf("Ingrese el segundo string:");
         scanf("%s", &b);
         
    Resultado = Compara(a,b); // Llamo a la funcion Comparar pasandole los valores de a y de b.
    
    if (Resultado == 0){ 
    	printf("Strings iguales");
	}else{
		printf("Strings distintos");
	}
	
}
