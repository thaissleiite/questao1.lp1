//*programa em C para calcular e exibir a média de três números*\\

#include <stdio.h> //*biblioteca

int main() { //função principal
    float n, m, o, media; //variáveis

    printf("Insira o primeiro numero: ");
    scanf("%f", &n);

    printf("Insira o segundo numero: ");
    scanf("%f", &m);

    printf("Digite o terceiro numero: ");
    scanf("%f", &o);
    //imprime o que o usuário deve fazer
    //ler o que foi inserido pelo usuário e armazena na variável

    media = (n + m + o) / 3.0;
    //Calcula a média dos três números (somando) e divide o resultado da soma por 3.0 (para média decimal - float).

    printf("A media dos tres numeros eh: %f\n", media);
    //imprime a media\\

    return 0;
}
