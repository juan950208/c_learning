#include <stdio.h>

int main(int argc, char const *argv[])
{

	int num_1, num_2, suma;

	printf("ingrese un entero\n");
	scanf("%d", &num_1);
	printf("ingrese otro entero\n");
	scanf("%d", &num_2);

	suma = num_1 + num_2;

	printf("la suma de los numeros es: %d\n", suma);

	return 0;
}