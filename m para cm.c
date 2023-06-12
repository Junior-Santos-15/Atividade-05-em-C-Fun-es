#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void medida(float m){
    float transforma;

    transforma = m * 100;

    printf("Em cetímetros fica: %1.f\n",transforma,"CM");
}

int main(){
setlocale(LC_ALL,"portuguese");

int metros;

printf("Digite um valor em metros: \n");
scanf("%d",&metros);

medida(metros);

return 0;
}