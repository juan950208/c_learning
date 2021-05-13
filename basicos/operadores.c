#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int num_1, num_2;

	printf("ingrese dos numeros enteros: \n");
	scanf("%d%d", &num_1, &num_2);

	if(num_1 == num_2){
		printf("los dos numeros son iguales\n");
	}

	if (num_1 > num_2){
		printf("%d es mayor que %d\n", num_1, num_2);	
	}

	if(num_1 < num_2){
		printf("%d es mayor que %d\n", num_2, num_1);
	}


	return 0;
}