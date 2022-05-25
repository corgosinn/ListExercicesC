#include <stdio.h>

int main(int argc, char const *argv[])
{
    float resistor1, resistor2, paralelo, serie;
    printf("Digite o valor do primeiro resistor: ");
    scanf("%f", &resistor1);
    printf("Digite o valor do segundo resistor: ");
    scanf("%f", &resistor2);
    paralelo = (1 / resistor1) + (1 / resistor2);
    printf("Resistor 1 : %.2f\n", resistor1);
    printf("Resistor 2 : %.2f\n", resistor2);
    printf("Resistores em paralelo : %.2f\n", paralelo);
    printf("Resistores em serie : %.2f\n", resistor1 + resistor2);

    return 0;
}
