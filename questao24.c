#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = -1;
    while (n < 0)
    {
        printf("Digite o valor de n: ");
        scanf("%d", &n);
    }
    printf("O cubo de %d eh %d", n, (n * n * n));

    return 0;
}
