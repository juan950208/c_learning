#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int total, promedio, calif, counter;

	total = 0;
	counter = 1;

	while(counter <= 10){
		printf("Introduzca la calificacion: \n");
		scanf("%d", &calif);
		total = total + calif;
		counter+=1;
	}

	promedio = total / 10;
	printf("El TOTAL de calificaciones es: %d\n", total);
	printf("El PROMEDIO de calificaciones es: %d\n", promedio);

	return 0;
}