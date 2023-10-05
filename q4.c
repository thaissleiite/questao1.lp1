//programa em C que ler o raio de um circulo, imprime o diametro e o valor da circuferencia e da area

#include <stdio.h>
  int main(){
    float r, pi = 3.14;
      printf("insira o valor do raio do circulo:\n"); //raio do circulo é a metade do comprimento do diamentro
       scanf("%f", &r);

    float diametro = r * 2;
    float circuferencia = 2 * pi * r;
    float area = pi * r * r;

      printf("O diametro eh %.2f.\n", diametro);
      printf("A circuferencia eh %.2f.\n", circuferencia);
      printf("O diametro eh %.2f.\n", area);

  }
