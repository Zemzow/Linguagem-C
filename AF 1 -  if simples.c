/*AF 1 - Exercício 3 - if simples

Leia um valor inteiro, se for par, escreva “par”. Não precisa tratar ímpar.
*/

#include <stdio.h>


int main()
{
    int x;
    
    printf("Digite o valor de x: ");
    scanf ("%d", &x);
    
    if ( x % 2 == 0){
        printf("\nEsse número é par.");
    }
    return 0;
}