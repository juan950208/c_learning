#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int apro = 0;
    int repro = 0;
    int in;
    int counter = 1;

    while(counter <= 10){
        printf("ingrese 1 para aprobados 2 para reprobados\n");
        scanf("%d", &in);

        if((in == 1) || (in == 2)){
            if(in == 1){
                apro += 1;
            }else{
                repro += 1;
            }
            counter += 1;
        }else{
            printf("Por favor ingrese una entrada valida\n");
        }
    }

    printf("La canditad de APROBADOS es: %d\n", apro);
    printf("La canditad de REPROBADOS es: %d\n", repro);

    if(apro >= 8){
        printf("Se logro el objetivo.\n");
    }else{
        printf("NO se logro el objetivo.\n");    
    }

    return 0;
}
