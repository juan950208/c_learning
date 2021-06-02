/*Enunciado: sumar los enteros impares entre 1 y 99 utilizando la funcion for*/
#include <stdio.h>
int main(int argc, char const *argv[]){

    int sum = 0;

    for ( int count = 1; count <= 99; count++){
    
        if( !(count % 2 == 0) ){
            sum += count;
        }
    }

    printf("la suma es: %d", sum);
    

    return 0;
}