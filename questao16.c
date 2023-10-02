#include<stdio.h>
#include<stdlib.h>

int main () {
float a,b,c;

printf("Insira um numero para a:\n");
scanf("%f",&a);

printf("Insira um numero para b:\n");
scanf("%f",& b);

printf("Insira um numero para c:\n");
scanf("%f", &c);

if (a > 0 && b > 0 && c > 0) {
        if (a < (b + c) && b < (a + c) && c < (a + b))
            printf("a, b, c podem ser lados de um triangulo.");
        else
            printf("a, b, c não podem ser lados de um triangulo.");
    } else {
        printf("a, b, c precisam ser maiores que 0.");
    }

return 0;
}
