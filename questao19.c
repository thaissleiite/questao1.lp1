#include <stdio.h>

int main() {
    float sb, sm, cINSS, sl;


    sm = 1320.00; //valor do salário mínimo

    printf("Digite o salario bruto: R$ "); //
    scanf("%f", &sb);
    //imprime o que o usuário deve fazer
    //ler o que foi inserido pelo usuário e armazena na variável


    if (sb <= 3 * sm) {
        cINSS = sb * 0.08;
    }
    else if (sb > 3 * sm && sb <= 10 * sm) {
        cINSS = sb * 0.10;
    }
    else {
        cINSS = 10 * sm;
    }

    // Calcula a contribuição ao INSS com base nas regras fornecidas

    sl = sb - cINSS;

    printf("Contribuicao ao INSS: R$ %.2f\n", cINSS);
    printf("Salario liquido restante: R$ %.2f\n", sl);

    return 0;
}
