#include <stdio.h>
#include <math.h>

int CalcularImc(void){
    
    //Declaro las variables 
    int peso;
    float altura,operacion;
    
    printf("Altura (metros):");//Texto que sirve para especificar el dato que quiero recibir
    scanf("%f",&altura); //"%f" es que el valor puesto debe ser de tipo float. "&altura" el valor escrito se almacena en la variable altura
    
    printf("Peso (gramos):");//Dice que quiero el peso
    scanf("%i",&peso);// "%i" es un valor int (entero), "&peso" el valor escrito se almacena en la variable peso
    
    //operacion a realizar para obtener el valor de IMC
    operacion = peso / (altura*altura); 
    
    printf("IMC es: %0.2f \n",operacion); //Muestra el resultado de "operacion", el cual es el valor de IMC
    
    //Funcion IF en la cual segun el resultado de operacion dice una definición de como se considera tu IMC
    if (operacion < 16.00){
        printf("Infrapeso: Delgadez Severa \n");
    }
    else if((operacion >= 16.00) && (operacion <17.00)){
        printf("Infrapeso: Delgadez moderada\n");  
    }
    else if((operacion >= 17.00) && (operacion <18.50)){
        printf("Infrapeso: Delgadez aceptable\n");  
    }
    else if((operacion >= 18.50) && (operacion <25.00)){
        printf("Peso Normal\n");  
    }
    else if((operacion >= 25.00) && (operacion <30.00)){
        printf("Sobrepeso\n");  
    }
    else if((operacion >= 30.00) && (operacion <35.00)){
        printf("Obeso: Tipo I\n");  
    }
    else if((operacion >= 35.00) && (operacion <=40.00)){
        printf("Obeso: Tipo II\n");  
    }
    else if(operacion >40.00){
        printf("Obeso: Tipo III\n");  
    }
    else{
        printf("Valores erroneos\n");
    }
    
    return 0;//Verifica que todo se ejecuto bien y finaliza el programa
    
}