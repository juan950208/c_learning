#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
    
    int x = 0;
    int y = 0;
    int x_aux = 0;
    int y_aux = 0;
    double mag = 0;
    double dir = 0;
    double rad = 0;
    double grad = 0;

    printf("ingrese la coordenada x\n");
    scanf("%d", &x);
    printf("ingrese la coordenada y\n");
    scanf("%d", &y);
    
    //magnitud
    mag = sqrt( (pow(x,2)) + (pow(y,2)) );

    //para la direccion
    dir = atan((y + 0.0) / x);
    if(x == 0){
        printf("no aplica el angulo del vector");

    //primer cuadrante
    }else if(x > 0 && y >= 0){
        rad = dir;
        
    //segundo cuadrante
    }else if(x < 0 && y > 0){
        rad = dir + 3.14159;

    //tercer cuadrante
    }else if (x < 0 && y < 0){
        rad = dir + 3.14159;
        
    //cuarto cuadrante
    }else if (x > 0 && y < 0){
        rad = dir + 6.28319;
    }

    //conversion de radianes a grados
    grad = rad * (180/3.14159);
    
    printf("la magnitud del vector [%d,%d] es: %f\n", x,y,mag);
    printf("la direccion del vector [%d,%d] es: %f rad, %f grad\n",x,y,rad, grad);
    

    return 0;
}

