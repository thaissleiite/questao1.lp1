 //*programa para calcular quantas notas de 50, 20, 10 e 1 são necessárias para pagar uma conta cujo valor é fornecido (considerando apenas valores inteiros)*\\

#include <stdio.h> //biblioteca

int main() {
    int vconta, n50, n20, n10, n1; //variáveis

    printf("Insira o valor da conta: "); //imprime o que o usuário deve fazer
    scanf("%d", &vconta); //ler o que foi inserido pelo usuário e armazena na variável

    n50 = vconta / 50;
    vconta = vconta % 50;
    //Divide o vconta por 50 usando a divisão inteira para calcular quantas notas de 50 são necessárias.
    //usa o operador de módulo % para obter o valor restante com a divisão por 50 e o armazena de volta na variável vconta.

    n20 = vconta / 20;
    vconta = vconta % 20;
    //Divide o vconta por 20 usando a divisão inteira para calcular quantas notas de 20 são necessárias.
    //usa o operador de módulo % para obter o valor restante com a divisão por 20 e o armazena de volta na variável vconta.

    n10 = vconta / 10;
    vconta = vconta % 10;
    //Divide o vconta por 10 usando a divisão inteira para calcular quantas notas de 10 são necessárias.
    //usa o operador de módulo % para obter o valor restante com a divisão por 10 e o armazena de volta na variável vconta.

    n1 = vconta;
    //Divide o vconta por 1 usando a divisão inteira para calcular quantas notas de 1 são necessárias.
    //usa o operador de módulo % para obter o valor restante com a divisão por 1 e o armazena de volta na variável vconta.

    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);
   //imprime a quantidade de notas necessárias\\

    return 0;
}
