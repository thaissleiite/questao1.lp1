//programa em c que o usuário fornece  três números de ponto flutuante e imprime a soma, a média, o produto, o menor e o maior desses números.

#include <stdio.h> //biblioteca padrão de entrada e saída em C
  int main (){ //funcao principal indica que a função retorna um valor
    float p, q, r; //tipo de dado + variavel -  armazenar os números fornecidos pelo usuário

      printf("Insira o primeiro numero inteiro:\n");
        scanf("%f", &p);
      printf("Insira o segundo numero inteiro:\n");
        scanf("%f", &q);
      printf("Insira o segundo numero inteiro:\n");
        scanf("%f", &r);
        ////imprime o que o usuário deve fazer
        //ler o que foi inserido pelo usuário e armazena na variável

          float soma = p + q + r;
          float media = (p + q + r) / 3.0;
          float produto = p *q * r;
        //cálculos com os números fornecidos

              float menor = p; //p é menor
                if(q < menor){ //se q menor que p
                  menor = q; //q menor
                }
                if(r < menor){ //r menor que q
                menor = r; //r menor
                 //calcula o menor dos três números - primeiro pega P como menor e identifica q e r
          }
  float maior = p; //p é maior
             if(q > maior){ //se q maior que p
                maior = q; //q maior
             }
             if(r > maior){ //se r maior que q
              maior = r; //r maior
             }
                //calcula o maior dos três números - primeiro pega P como maior e identifica q e r

             printf("Soma: %.2f\n", soma);
             printf("Media: %.2f\n", media);
             printf("Maior: %.2f\n", maior);
             printf("Menor: %.2f\n", menor);
       //imprime soma, média, maior e menor\\
            return 0;


  }


