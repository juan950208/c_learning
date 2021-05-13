#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int x, y, z, mult;

	printf("Ingrese 3 enteros: \n");
	scanf("%d%d%d", &x, &y, &z);

	mult = x * y * z;

	printf("la multiplicacion de: %d, %d y %d es %d\n", x, y, z, mult);

	return 0;
}