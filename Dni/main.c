#include <stdio.h>
#include <math.h>

int main(void){
    
    int dni,calculo_dni;
    char letra_dni[24]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','O'};
    
    //Pedimos que escriba y muestre el dni 
    printf("Escribe tu Dni: \n");
    scanf("%d", &dni);

    /*Otra forma de poder calcularlo es usando estas formulas pero dan fallo:
    calculo_dni = dni * 23;
    calculo_dni = calculo_dni/23;
    calculo_dni = dni - calculo_dni;*/
    
    calculo_dni = dni %23;
           
    printf("El dni escrito %i \n",calculo_dni);

    printf("La letra del DNI es: %c \n", letra_dni[calculo_dni]);
    
    return 0;
}