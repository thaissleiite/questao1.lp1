//programa em C que permite a entrada de x e y troca os valores entre si e imprime novos resultados:

#include <stdio.h> //bilblioteca

int main() { //fun��o principal
    int x, y, novor; //vari�veis

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de y: ");
    scanf("%d", &y);

    //imprime o que o usu�rio deve fazer
    //ler o que foi inserido pelo usu�rio e armazena na vari�vel

    novor = x; x = y; y = novor;
      //troca


    printf("Os novos resultados sao:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
