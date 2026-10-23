
#include <stdio.h>

int main(void)
{
    int passos, total = 0, horas = 0;

    while (total < 10000)
    {
        printf("Quantos passos voce deu nesta hora? ");
        scanf("%d", &passos);

        total += passos;
        horas++;
    }

    printf("\nTotal de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}
