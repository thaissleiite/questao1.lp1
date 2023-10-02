#include <stdio.h>

int main() {
    float tC, tF;

    printf("Insira a temperatura em graus Celsius (C): ");
    scanf("%f", &tC);

    tF = (9.0 / 5.0) * tC + 32;

    printf("A temperatura em graus Fahrenheit (F) eh: %.2lf\n", tF);

    return 0;
}
