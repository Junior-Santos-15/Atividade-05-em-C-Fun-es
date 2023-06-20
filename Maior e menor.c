#include <stdio.h>
#include <stdlib.h>

void maiorEmenor(int num1, int num2, int *maior, int *menor) {
    if(num1 > num2) {
        *maior = num1;
        *menor = num2;
    } else {
        *maior = num2;
        *menor = num1;
    }
}

int main() {
    int num1, num2, maior, menor;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número : ");
    scanf("%d", &num2);
    maiorEmenor(num1, num2, &maior, &menor);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    return 0;
}