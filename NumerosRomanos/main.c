#include <stdio.h>
#include <math.h>

int main(void){
    
    //Declaro las variables
    int num,opU,opD,opC,opM;
 
    //Declaro una matriz de tipo caracter
    char *numR[4][10];
    
    //Establezco los valores que tendra la matriz
    numR[3][3]="MMM";
    numR[3][2]="MM";
    numR[3][1]="M";
    numR[3][0]="";
    
    numR[2][9]="CM";
    numR[2][8]="DCCC";
    numR[2][7]="DCC";
    numR[2][6]="DC";
    numR[2][5]="D";
    numR[2][4]="CD";
    numR[2][3]="CCC";
    numR[2][2]="CC";
    numR[2][1]="C";
    numR[2][0]="";
    
    numR[1][8]="XC";
    numR[1][7]="LXX";
    numR[1][6]="LX";
    numR[1][5]="L";
    numR[1][4]="XL";
    numR[1][3]="XXX";
    numR[1][2]="XX";
    numR[1][1]="X";
    numR[1][0]="";
    
    
    numR[0][9]="IX";
    numR[0][8]="VIII";
    numR[0][7]="VII";
    numR[0][6]="VI";
    numR[0][5]="V";
    numR[0][4]="IV";
    numR[0][3]="III";
    numR[0][2]="II";
    numR[0][1]="I";
    numR[0][0]="";
 
    //Leemos el numero entero que queremos convertir a numeros romanos
    printf("Escribe un numero: \n");
    scanf("%i", &num);
    
    //Operaciones usadas para calcular con el numero entero escrito que posicion de la matriz vamos a usar
    opU = num%10;
    opD = (num/10)%10;
    opC = (num/100)%10;
    opM = (num/1000)%10;

    //Solo queremos valores inferiores a 3000 
    if (num > 3000 ){
        //Si es un valor superior a 300 mostrara por pantalla el siguiente mensaje
        printf("Numero no valido \n");
    }
    else{
        //Si es un numero entero entre 0 y 3000 nos dira su conversion a numeros romanos
        printf("El numero en romano es: %s%s%s%s \n",numR[3][opM],numR[2][opC],numR[1][opD],numR[0][opU]);
    }
    return 0;
}
