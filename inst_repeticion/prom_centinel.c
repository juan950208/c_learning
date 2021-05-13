#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int counter, total, calif;
	float prom;

	counter = 0;
	total = 0;

	printf("Ingrese la calificacion o -1 para salir\n");
	scanf("%d", &calif);

	while(calif >= 0){
		total = total + calif;
		counter+=1;
		printf("Ingrese la calificacion o -1 para salir\n");
		scanf("%d", &calif);
	}

	if(counter > 0){
	prom = (float) total / counter;
	printf("El promedio de calificaciones es: %.3f\n", prom);
	}else{
		printf("No se introdujeron calificaciones\n");
	}

	return 0;
}