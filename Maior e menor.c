#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maiorEmenor(int numero[])
{
    int i;
int maiorNumero = INT_MIN, menorNumero = INT_MAX;

    for (i = 0; i < 3; i++){
 if(numero[i] > maiorNumero)
        {
            maiorNumero = numero[i];
        }
        
        if(numero[i] < menorNumero)
        {
            menorNumero = numero[i];
        }
    }
    printf("Maior número: %d \n", maiorNumero);
    printf("Menor número: %d \n", menorNumero);
}


int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, numero[3];
 

    for (i = 0; i < 3; i++)
    {

        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &numero[i]);

 
    }

   system("cls");

    
    maiorEmenor(numero);

    

    return 0;
}
