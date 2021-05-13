#include <stdio.h>

int main(int argc, char const *argv[]){

    int x = 0;
    int y = 0;
    int z = 0;
    int producto = 0;

    printf("ingrese el valor para x y y: \n");
    scanf("%d%d", &x, &y);
    printf("ingrese el valor para producto: \n");
    scanf("%d", &producto);

    z = x++ + y;
    x += 1;
    producto *= 2;

    printf("El valor de z es: %d\n", z);
    printf("El valor de producto es: %d\n", producto);

    return 0;
}
