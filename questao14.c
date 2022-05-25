#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tm, distancia;
    printf("Digite a temperatura media: ");
    scanf("%f", &tm);
    printf("Digite a distancia: ");
    scanf("%f", &distancia);
    if (distancia < 0)
    {
        printf("Distancia negativa? Ta de sacanagem?!\n"); /*Pediu para dar um xingao no usuario kkk*/
    }
    else if (distancia > 10000)
    {
        printf("Inaceitavel\n");
    }
    else if (tm >= 20 && tm <= 25)
    {
        printf("Perfeito!\n");
    }
    else
    {
        printf("Okay\n");
    }

    return 0;
}
