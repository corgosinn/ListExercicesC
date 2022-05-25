#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Digite o valor de A (0,1): ");
    scanf("%d", &a);
    printf("Digite o valor de B (0,1): ");
    scanf("%d", &b);
    printf("Digite o valor de C (0,1): ");
    scanf("%d", &c);
    if (a == 0 && b == 1 || b == 0 && c == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
