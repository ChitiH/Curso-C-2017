#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    //Declaro las variables a usar en el programa
    int *Billetes[]={500,200,100,50,20,10,5};
    int *monedas[]={2,1};
    float centimos[]={0.50,0.20,0.10,0.05,0.02,0.01};
    float sueldo;
    int operacion500,sueldo500,operacion200,sueldo200,operacion100,sueldo100;
    int operacion50,sueldo50,operacion20,sueldo20,operacion10,sueldo10,operacion5,sueldo5;
    int operacion2,sueldo2,operacion1,sueldo1,operacion05,sueldo05,operacion02,sueldo02;
    int operacion01,sueldo01,operacion005,sueldo005,operacion002,sueldo002,operacion001,sueldo001;
    
    printf("Devolucion de nuestro sueldo en billetes y monedas \n");
    
    //Leo el sueldo que tengo 
    printf("Sueldo: \n");
    scanf("%f",&sueldo);  
   
    //Operacion para calcular los billetes de 500
    operacion500 = sueldo / 500;
    sueldo500 = operacion500;
    
    //Operacion para calcular los billetes de 200
    operacion200 = sueldo - (operacion500 * 500);
    sueldo200 = operacion200/200;
    
    //Operacion para calcular los billetes de 100
    operacion100 = operacion200 - (sueldo200 * 200);
    sueldo100 = operacion100/100;
    
    //Operacion para calcular los billetes de 50
    operacion50 = operacion100 - (sueldo100 * 100);
    sueldo50 = operacion50/50;
    
    //Operacion para calcular los billetes de 20
    operacion20 = operacion50 - (sueldo50 * 50);
    sueldo20 = operacion20/20;
    
    //Operacion para calcular los billetes de 10
    operacion10 = operacion20 - (sueldo20 * 20);
    sueldo10 = operacion10/10;
    
    //Operacion para calcular los billetes de 5
    operacion5 = operacion10 - (sueldo10 * 10);
    sueldo5 = operacion5/5;
    
    //Operacion para calcular las monedas de 2 euro
    operacion2 = operacion5 - (sueldo5 * 5);
    sueldo2 = operacion2/2;
    
    //Operacion para calcular las monedas de 1 euro
    operacion1 = operacion2 - (sueldo2 * 2);
    sueldo1 = operacion1/1;
    
     //Operacion para calcular las monedas de 0.5 euro
    operacion05 = operacion1 - (sueldo1 * 1);
    sueldo05 = operacion05/0.5;
    
    //Operacion para calcular las monedas de 0.2 euro
    operacion02 = operacion05 - (sueldo05 * 0.5);
    sueldo02 = operacion02/0.2;
    
    //Operacion para calcular las monedas de 0.1 euro
    operacion01 = operacion02 - (sueldo02 * 0.2);
    sueldo01 = operacion01/0.1;
    
    //Operacion para calcular las monedas de 0.05 euro
    operacion005 = operacion01 - (sueldo01 * 0.1);
    sueldo005 = operacion005/0.05;
    
    //Operacion para calcular las monedas de 0.05 euro
    operacion002 = operacion005 - (sueldo005 * 0.05);
    sueldo002 = operacion002/0.02;
    
    //Operacion para calcular las monedas de 0.05 euro
    operacion001 = operacion002 - (sueldo002 * 0.02);
    sueldo001 = operacion001/0.01;
    
    if (sueldo <= 6000){
        //Lee el cambio de nuestro sueldo en billetes y monedas 
        printf("El sueldo en billetes de 500 es: %i \n", sueldo500); 
        printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
        printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
        printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
        printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
        printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
        printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
        printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
        printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
        
        //No funcionan las operaciones con los centimos 
        
        printf("El sueldo en monedas de 0.5 es: %i \n", sueldo05);
        printf("El sueldo en monedas de 0.2 es: %i \n", sueldo02);
        printf("El sueldo en monedas de 0.1 es: %i \n", sueldo01);
        printf("El sueldo en monedas de 0.05 es: %i \n", sueldo005);
        printf("El sueldo en monedas de 0.02 es: %i \n", sueldo002);
        printf("El sueldo en monedas de 0.01 es: %i \n", sueldo001);
    }
    else if(sueldo < 0){
        printf("No existen saldos negativos \n");
    }
    else{
        printf("El sueldo no entra dentro de los valores establecidos \n");
    } 
    
    return 0;
    
}

