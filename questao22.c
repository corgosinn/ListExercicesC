#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    float media = 0, nota;
    printf("Quantas notas voce quer ler: ");
    scanf("%d", &n);
    for (x = 0; x < n; x++)
    {
        printf("Digite a nota %d: ", x + 1);
        scanf("%f", &nota);
        media += nota;
    }
    media /= n;
    printf("Media das provas : %.2f", media);
    return 0;
}
