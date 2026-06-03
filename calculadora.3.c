#include <stdio.h>
#include <stdlib.h>
#include "function_multiplicar.c"
#include "function_divisao.c"

int main() 
{
    int opcao, numero1, numero2, resultado;

    do 
    {
        printf("Feito Por Pietra Oliveia Narciso Santos\n")
        printf("0. Sair\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Divisão\n");
        printf("4. Multiplicação\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("Digite o primeiro número: ");
            scanf("%d", &numero1);
            printf("Digite o segundo número: ");
            scanf("%d", &numero2);

            if (opcao == 1)
            {
                resultado = numero1 + numero2;
                printf("\nA soma de %d com %d é igual a %d\n", numero1, numero2, resultado);
            } 
            else if (opcao == 2)
            {
                resultado = numero1 - numero2;
                printf("\nA subtração de %d com %d é igual a %d\n", numero1, numero2, resultado);
            } 
            else if (opcao == 3)
            {
                if (numero2 != 0) {
                    printf("\nResultado da divisão: %d\n", dividir(numero1, numero2));
                }
                else
                {
                    printf("\nErro: Divisão por zero!\n");
                }
            } 
            else if (opcao == 4)
            {
                printf("\nResultado da multiplicação: %d\n", multiplicar(numero1, numero2));
            }
        } 
        else if (opcao != 0)
        {
            printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma encerrado.\n");
    return 0;
}