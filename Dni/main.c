#include <stdio.h>
#include <math.h>

int main(void){

    //Declaro las variables de tipo entero
    int dni,calculo_dni;
    
    /*
    *Declaro un array que contendra 24 elementos de tipo caracter. Como son una sola palabra se encierra entre comillas simples ('c',..),
    *si se tratara de un array de nombres se tendría que encerrar entre comillas dobles ("Chiti","...")
    */
    char letra_dni[24]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','O'};
    
    //Pedimos que escriba y muestre el dni 
    printf("Escribe tu Dni: \n");
    scanf("%d", &dni);
    
    //Operacion por la cual calcula dni
    calculo_dni = dni %23;
    
    /*
    * Otra forma de poder calcularlo es usando estas formulas pero dan fallo 
    * calculo_dni = dni * 23;
    * calculo_dni = calculo_dni/23;
    * calculo_dni = dni - calculo_dni;
    */
    
    //Muestra por pantalla el valor que nos dio la operacion calculo_dni por ejemplo 2
    printf("El dni escrito %i \n",calculo_dni);

    /*
    * Muestra por pantalla la letra del Dni. Con "letra_dni[calculo_dni]" lo que quiere representar es que si "calculo_dni=2", en 
    * letra_dni que es un array de caracteres busca el valor que contiene en la posicion 2 (letra_dni[2]={'R'}) que seria la equivalente
    * a la letra del dni puesto en este caso R
    */
    printf("La letra del DNI es: %c \n", letra_dni[calculo_dni]);
    
    //Se cierra el programa y verifica que todo se ejecuto correctamente
    return 0;
}
