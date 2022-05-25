#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, qt = 0;
    printf("Digite o numero: ");
    scanf("%d", &n);
    for (x = 1; x < n; x++)
    {
        if (n % x == 0)
        {
            qt++;
        }
    }
    if (qt == 1)
    {
        printf("Numero primo\n");
    }
    else
    {
        printf("Numero nao eh primo\n");
    }

    return 0;
}
