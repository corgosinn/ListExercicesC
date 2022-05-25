#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("Digite as quatros saidas: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > 1 || b > 1 || c > 1 || d > 1 || a < 0 || b < 0 || c < 0 || d < 0)
    {
        printf("Valores maiores ou menores que 0 ou 1\n");
    }

    if (a == 0 && b == 0 && c == 0 && d == 0)
    {
        printf("Porta 0");
    }
    else if (a == 0 && b == 0 && c == 0 && d == 1) /* 1 */
    {
        printf("Porta AND");
    }
    else if (a == 0 && b == 0 && c == 1 && d == 0) /* 2 */
    {
        printf("Porta !A.B");
    }
    else if (a == 0 && b == 0 && c == 1 && d == 1) /* 3 */
    {
        printf("Porta A Negada");
    }
    else if (a == 0 && b == 1 && c == 0 && d == 0) /* 4 */
    {
        printf("Porta A.!B");
    }
    else if (a == 0 && b == 1 && c == 0 && d == 1) /* 5 */
    {
        printf("Porta B Negada");
    }
    else if (a == 0 && b == 1 && c == 1 && d == 0) /* 6 */
    {
        printf("Porta XOR");
    }
    else if (a == 0 && b == 1 && c == 1 && d == 1) /* 7 */
    {
        printf("Porta OR");
    }

    else if (a == 1 && b == 0 && c == 0 && d == 0) /* 8 */
    {
        printf("Porta NOR");
    }

    else if (a == 1 && b == 0 && c == 0 && d == 1) /* 9 */
    {
        printf("Porta XNOR");
    }
    else if (a == 1 && b == 0 && c == 1 && d == 0) /* 10 */
    {
        printf("Porta B");
    }
    else if (a == 1 && b == 1 && c == 1 && d == 1) /* 12 */
    {
        printf("Porta A");
    }
    else if (a == 1 && b == 1 && c == 1 && d == 0) /* 14 */
    {
        printf("Porta NAND");
    }

    else
    {
        printf("Porta nao reconhecida");
    }

    return 0;
}
