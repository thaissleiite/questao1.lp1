//*programa em C para calcular e exibir a m�dia de tr�s n�meros*\\

#include <stdio.h> //*biblioteca

int main() { //fun��o principal
    float n, m, o, media; //vari�veis

    printf("Insira o primeiro numero: ");
    scanf("%f", &n);

    printf("Insira o segundo numero: ");
    scanf("%f", &m);

    printf("Digite o terceiro numero: ");
    scanf("%f", &o);
    //imprime o que o usu�rio deve fazer
    //ler o que foi inserido pelo usu�rio e armazena na vari�vel

    media = (n + m + o) / 3.0;
    //Calcula a m�dia dos tr�s n�meros (somando) e divide o resultado da soma por 3.0 (para m�dia decimal).

    printf("A media dos tres numeros eh: %f\n", media);
    //imprime a media\\

    return 0;
}
