#include <stdio.h>

int main(int argc, char const *argv[])
{
    float parafusoGrande[2], parafusoPequeno[2], dobradica[2], valorFinal[2] = {0, 0};
    int negativo[2] = {0, 0};
    printf("\nLOJA 1\n");
    printf("Digite o valor de um parafuso grande da loja 1: ");
    scanf("%f", &parafusoGrande[0]);
    printf("Digite o valor de um parafuso pequeno da loja 1: ");
    scanf("%f", &parafusoPequeno[0]);
    printf("Digite o valor de uma dobradica da loja 1: ");
    scanf("%f", &dobradica[0]);
    if (parafusoGrande[0] < 0 || parafusoPequeno[0] < 0 || dobradica[0] < 0)
    {
        negativo[0] = 1;
    }
    printf("\nLOJA 2\n");
    printf("Digite o valor de um parafuso grande da loja 2: ");
    scanf("%f", &parafusoGrande[1]);
    printf("Digite o valor de um parafuso pequeno da loja 2: ");
    scanf("%f", &parafusoPequeno[1]);
    printf("Digite o valor de uma dobradica da loja 2: ");
    scanf("%f", &dobradica[1]);
    if (parafusoGrande[1] < 0 || parafusoPequeno[1] < 0 || dobradica[1] < 0)
    {
        negativo[1] = 1;
    }
    valorFinal[0] = (12 * parafusoGrande[0]) + (8 * parafusoPequeno[0]) + (4 * dobradica[0]);
    valorFinal[1] = (12 * parafusoGrande[1]) + (8 * parafusoPequeno[1]) + (4 * dobradica[1]);
    if (negativo[0] != 1 && negativo[1] != 1)
    {
        if (valorFinal[0] < valorFinal[1])
        {
            printf("A LOJA 1 é mais barata\nPreco final: %.2f\n", valorFinal[0]);
        }
        else
        {
            printf("A LOJA 2 é mais barata\nPreco final: %.2f\n", valorFinal[1]);
        }
    }
    else
    {
        if (negativo[0] == negativo[1])
        {
        }
        else if (negativo[0] == 1)
        {
            printf("A loja 1 nao tem os suprimentos\n");
            if (valorFinal[0] < valorFinal[1])
            {
                printf("A LOJA 1 e mais barata\nPreco final: %.2f\n", valorFinal[0]);
            }
            else
            {
                printf("A LOJA 2 e mais barata\nPreco final: %.2f\n", valorFinal[1]);
            }
        }
        else
        {
            printf("A loja 2 nao tem os suprimentos\n");
            if (valorFinal[0] < valorFinal[1])
            {
                printf("A LOJA 1 e mais barata\nPreco final: %.2f\n", valorFinal[0]);
            }
            else
            {
                printf("A LOJA 2 e mais barata\nPreco final: %.2f\n", valorFinal[1]);
            }
        }
    }

    return 0;
}
