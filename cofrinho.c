
#include <stdio.h>

int main(void)
{
    int opcao;
    float saldo = 0;

    do
    {
        printf("\n=== COFRINHO DIGITAL ===\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Parar e mostrar saldo\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                saldo += 0.50;
                break;

            case 2:
                saldo += 1.00;
                break;

            case 3:
                saldo += 2.00;
                break;

            case 0:
                break;

            default:
                printf("Opcao invalida!\n");
        }

        printf("Saldo atual: R$ %.2f\n", saldo);

    } while (opcao != 0);

    printf("\nTotal acumulado: R$ %.2f\n", saldo);

    return 0;
}
