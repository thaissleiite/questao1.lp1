 //*programa para calcular quantas notas de 50, 20, 10 e 1 s�o necess�rias para pagar uma conta cujo valor � fornecido (considerando apenas valores inteiros)*\\

#include <stdio.h> //biblioteca

int main() {
    int vconta, n50, n20, n10, n1; //vari�veis

    printf("Insira o valor da conta: "); //imprime o que o usu�rio deve fazer
    scanf("%d", &vconta); //ler o que foi inserido pelo usu�rio e armazena na vari�vel

    n50 = vconta / 50;
    vconta = vconta % 50;
    //Divide o vconta por 50 usando a divis�o inteira para calcular quantas notas de 50 s�o necess�rias.
    //usa o operador de m�dulo % para obter o valor restante com a divis�o por 50 e o armazena de volta na vari�vel vconta.

    n20 = vconta / 20;
    vconta = vconta % 20;
    //Divide o vconta por 20 usando a divis�o inteira para calcular quantas notas de 20 s�o necess�rias.
    //usa o operador de m�dulo % para obter o valor restante com a divis�o por 20 e o armazena de volta na vari�vel vconta.

    n10 = vconta / 10;
    vconta = vconta % 10;
    //Divide o vconta por 10 usando a divis�o inteira para calcular quantas notas de 10 s�o necess�rias.
    //usa o operador de m�dulo % para obter o valor restante com a divis�o por 10 e o armazena de volta na vari�vel vconta.

    n1 = vconta;
    //Divide o vconta por 1 usando a divis�o inteira para calcular quantas notas de 1 s�o necess�rias.
    //usa o operador de m�dulo % para obter o valor restante com a divis�o por 1 e o armazena de volta na vari�vel vconta.

    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);
   //imprime a quantidade de notas necess�rias\\

    return 0;
}
