#include <stdio.h>

//calcula la suma de todos los numeros pares entre 2 y 100
int main(){
    
    int suma = 0;
    int numero;

    for(numero = 2; numero <= 100; numero += 2){
        suma += numero;
    }

    printf("La suma es %d\n", suma);

    return 0;
    
}