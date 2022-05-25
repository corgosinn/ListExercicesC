#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp = 0;
    while (temp != -1000)
    {
        printf("Digite o valor da temperatura: ");
        scanf("%f", &temp);
        if (temp != -1000)
        {
            printf("%.2fC = %.2fK\n", temp, temp + 273.15);
        }
    }

    return 0;
}
