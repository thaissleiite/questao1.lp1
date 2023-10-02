//programa em C para verificar se um número inteiro de quatro algarismos possui a propriedade desejada

#include <stdio.h> //biblioteca

 int main (){ //função principal
 int n; //variavel

   printf("insira um numero com quatro algarismos:\n");
   scanf("%d", &n);
         //imprime o que o usuário deve fazer
        //ler o que foi inserido pelo usuário e armazena na variável

    if(n >= 1000 && n <= 9999){
     //Verifica se o número digitado tem quatro algarismos pela condição if.
     //O intervalo de 1000 a 9999 representa números de quatro algarismos.

        int pd = n / 100;

        int sd = n % 100;
        //Se o número tiver quatro algarismos, divide o número em dois dígitos (os dois primeiros dígitos e os dois últimos)
        int soma = pd + sd;
        //e soma os dois dígitos.
        int r = soma * soma;
        //Eleva a soma ao quadrado .
        if (r == n) {
                //compara o resultado com o número original
            printf("O numero %d tem a propriedade.\n", n);
        } else {
            printf("O numero %d nao tem a propriedade.\n", n);
        }
    } else {
        printf("Insira um numero de quatro algarismos.\n");
    }
       //Pela comparação, informa se o número possui ou não a propriedade
       //imprime se o número possui ou não a propriedade\\
    return 0;
}
