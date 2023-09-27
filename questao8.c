#include <stdio.h>

 int main (){
 int m, n;
   printf("insira um numero inteiro:\n");
   scanf("%d", &m);
   printf("insira outro numero inteiro:\n");
   scanf("%d", &n);

int maior, menor;

  if(m > n){
   maior = m;
   menor = n;

  }

  if(n > m){
   maior = n;
   menor = m;

  }

  if(maior % menor == 0){

   printf("%d eh multiplo de %d.\n", maior, menor);
   }

  else {
    printf("%d nao eh multiplo de %d.\n", maior, menor);
}
    return 0;

}
