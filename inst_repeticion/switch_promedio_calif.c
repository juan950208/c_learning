#include <stdio.h>
// eof = ctr + d

int main(int argc, char const *argv[]){
    
    int calif;
    int cuentA = 0;
    int cuentB = 0;
    int cuentC = 0;
    int cuentD = 0;
    int cuentF = 0;

    printf("Introduzca la calificacion:\n");
    printf("introduzca eof para salir.\n");

    while( (calif = getchar() ) != EOF ){
        
        switch (calif){
        case 'A':
        case 'a':
            ++cuentA;
            break;

        case 'B':
        case 'b':
            ++cuentB;
            break;

        case 'C':
        case 'c':
            ++cuentC;
            break;

        case 'D':
        case 'd':
            ++cuentD;
            break;

        case 'F':
        case 'f':
            ++cuentF;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            printf("ha ingresado un dato incorrecto. ");
            printf("ingrese una calificacion. ");
        }
    }

    //mostrar datos

    
    printf("\nLos totales por calificacion son:\n");
    printf("A: %d\n", cuentA);
    printf("B: %d\n", cuentB);
    printf("C: %d\n", cuentC);
    printf("D: %d\n", cuentD);
    printf("F: %d\n", cuentF);
    
    return 0;
}