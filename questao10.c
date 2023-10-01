//*programa em C que calculta o quadrado e o cubo dos números de 0 a 10 e imprime os resultados formatados como uma tabela*\\

#include <stdio.h> //*biblioteca padrão de entrada e saída em C, é necessária para usar funções*\\

int main() {  //*define a função main, ponto de entrada principal do programa C*\\

int n; //*declara uma variável*\\

    printf("Este programa calcula o quadrado e o cubo dos numeros de 1 a 10 e usa tabulacoes na impressao:\n"); //*função printf, imprime uma mensagem na tela e informa o que o programa vai fazer*\\

    printf("Numero\tQuadrado\tCubo\n"); //*impressão do cabeçalho: "Numero", "Quadrado" e "Cubo", separados por tabulações*\\

      for(int n = 1; n <= 10; ++n) { //*for = loop; vai de 1 a 10 como pede o enunciado*\\

        int quadrado = n * n; //*calcula o quadrado*\\

        int cubo = n * n * n; //*calcula o cubo*\\

        printf("%d\t%d\t\t%d\n", n, quadrado, cubo); //*imprime os valores de n, quadrado e cubo, separados por tabulações*\\

      }

    return 0;
}
