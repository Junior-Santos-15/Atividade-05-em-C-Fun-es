#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcularSoma(int numeroUm, int numeroDois)
{
int soma;
soma = numeroUm + numeroDois;
printf("Soma: %d \n",soma);
}

int main(){
setlocale(LC_ALL,"portuguese");

int primeiroNumero, segundoNumero;

printf("Digite o primeiro n�mero: \n");
scanf("%d",&primeiroNumero);

printf("Digite o segundo n�mero: \n");
scanf("%d",&segundoNumero);

calcularSoma(primeiroNumero, segundoNumero);

    return 0;
}