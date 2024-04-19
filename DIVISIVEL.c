#include <stdio.h>

int numero;
int main() {
	

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("Numero divisivel por 2.\n");

        if(numero % 3 == 0) {
            printf("Numero divisivel por 3.\n");

            if(numero % 5 == 0) {
                printf("Numero divisivel por 5.\n");
            }
        }
    }

}
