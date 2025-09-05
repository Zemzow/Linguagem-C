/*AF 1 -4 - if / else simples

Receba um valor inteiro e diga se é negativo ou positivo.
*/

#include <stdio.h>


int main()
{
    int x;
    
    printf("Digite o valor de x: ");
    scanf ("%d", &x);
    
    if ( x > 0){
        printf("\nEsse número é positivo.");
    }
    else{
        printf("\nEsse número é negativo.");
    }
    return 0;
}