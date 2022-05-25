#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    if (x == 0 | y == 0)
    {
        printf("Uepa! Um ou mais numeros sao zero!\n");
    }
    if (x < 0 || y < 0)
    {
        if (x < 0 && y == 0)
        {
        }
        else if (y < 0 && x == 0)
        {
        }
        else
        {
            printf("Atencao! Um ou mais numeros sao negativos!\n");
        }
    }
    if ((5 * x) < (y * y * y))
    {
        printf("eh menor\n");
    }
    else
    {
        printf("eh maior\n");
    }

    return 0;
}
