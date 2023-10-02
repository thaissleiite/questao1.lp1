//programa em C para verificar se um n�mero inteiro de quatro algarismos possui a propriedade desejada

#include <stdio.h> //biblioteca

 int main (){ //fun��o principal
 int n; //variavel

   printf("insira um numero com quatro algarismos:\n");
   scanf("%d", &n);
         //imprime o que o usu�rio deve fazer
        //ler o que foi inserido pelo usu�rio e armazena na vari�vel

    if(n >= 1000 && n <= 9999){
     //Verifica se o n�mero digitado tem quatro algarismos pela condi��o if.
     //O intervalo de 1000 a 9999 representa n�meros de quatro algarismos.

        int pd = n / 100;

        int sd = n % 100;
        //Se o n�mero tiver quatro algarismos, divide o n�mero em dois d�gitos (os dois primeiros d�gitos e os dois �ltimos)
        int soma = pd + sd;
        //e soma os dois d�gitos.
        int r = soma * soma;
        //Eleva a soma ao quadrado .
        if (r == n) {
                //compara o resultado com o n�mero original
            printf("O numero %d tem a propriedade.\n", n);
        } else {
            printf("O numero %d nao tem a propriedade.\n", n);
        }
    } else {
        printf("Insira um numero de quatro algarismos.\n");
    }
       //Pela compara��o, informa se o n�mero possui ou n�o a propriedade
       //imprime se o n�mero possui ou n�o a propriedade\\
    return 0;
}
