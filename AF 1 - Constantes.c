/*AF 1 - Exercício 2 - Constantes

Crie uma constante PI = 3.14159 e, dado um raio, calcule a circunferência. (A
fórmula para o comprimento da circunferência C é dada por (C=2 * pi * r), onde r
representa o raio.

*/

#include <stdio.h>


int main()
{
    const float pi = 3.14159;
    float r;
    int circ = 2;
    
    printf("Digite o raio da circunferência: ");
    scanf ("%f", &r);
    
    float formula = circ * pi * r;
    
    
    printf("A circunferência é: %.2f", formula);
    return 0;
}