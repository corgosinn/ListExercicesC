#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    float saldo;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);
    if (idade < 18 && saldo < 0)
    {
        printf("Nao ne,nao\n");
    }
    else if (idade < 0)
    {
        printf("Erro\n");
    }
    else if (saldo < 0)
    {
        printf("Saldo negativo\n");
    }
    else if (idade < 18)
    {
        printf("Tem que ser maior de 18 anos\n");
    }
    else
    {
        printf("OK!");
    }

    return 0;
}
