#include <stdio.h>

int main(int argc, char const *argv[]){
    
    float litros = 0;
    float kilometros = 0;
    float lpk = 0;
    float in = 0;

    printf("Ingrese los litos de combustible gastados (-1 para salir)");
    scanf("%f", &litros);
    printf("Ingrese los kilómetros recorridos (-1 para salir)");
    scanf("%f", &kilometros);

    if ((litros < 0) || (kilometros < 0)){
        printf("Hasta pronto");
    }else{
        lpk = kilometros / litros;
        printf("Resultado: %f\n", lpk);
    }
    
    
    
    

    
    
    return 0;
}
