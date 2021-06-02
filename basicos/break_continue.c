#include <stdio.h>
int main(int argc, char const *argv[]){
    
    int cont = 0;

    for(cont = 1; cont <= 10; cont++){

        if (cont == 5){
            continue;
        }

        printf("%d ", cont);
        
    }

    printf("\nSe utiliza la expresion continue para ignorar el valor 5");
       

    return 0;
}
