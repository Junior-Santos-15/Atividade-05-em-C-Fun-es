#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Media (float primeroNumero, float segundoNumero) {
    return (primeroNumero + segundoNumero) / 2;
}

void resultadoFinal (float media) {
    if (media >= 7.0) {
        printf("\nAprovado!");
    } else if (media >= 5.0) {
        printf("\nRecupera��o!");
    } else {
        printf("\nReprovado!");
    }
}

int main () {
    setlocale(LC_ALL, "");

    float num1, num2, total;

    printf("Digite 1� nota: ");
    scanf("%f", &num1);
    
    printf("Digite 2� nota: ");
    scanf("%f", &num2);

    total = Media(num1,num2);

    printf("M�dia = %.1f\n", total);

    resultadoFinal(total);

    return 0;
}
