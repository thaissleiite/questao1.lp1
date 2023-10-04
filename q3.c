#include<stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite n1:\n");
    scanf("%f", &n1);

    printf("Digite n2:\n");
    scanf("%f", &n2);

    printf("Digite n3:\n");
    scanf("%f", &n3);

    float soma = n1 + n2 + n3;
    float media = (n1 + n2 + n3) / 3.0;
    float produto = n1 * n2 * n3;
    float menor = n1;

    if (n2 < menor) {
        menor = n2;
    }

    if (n3 < menor) {
        menor = n3;
    }

    float maior = n1;

    if(n1 > maior){
      maior = n1;
}
    if (n3 > maior) {
        maior = n3;
    }

    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);

    return 0;
}
