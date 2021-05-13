#include <stdio.h>

int main(int argc, char const *argv[]){
	
	char nombre[100];

	printf("Introduce tu nombre: \n");
	scanf("%s", nombre);

	printf("Hola, %s\n", nombre);

	return 0;
}