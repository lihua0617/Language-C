#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float *a = malloc(sizeof(float));
    printf("Quelle est la longueur de AB (en cm) ? ");
    scanf("%f", a);
    float *b = malloc(sizeof(float));
    printf("Quelle est la longueur de BC (en cm) ? ");
    scanf("%f", b);
    float c = sqrt(pow(*a,2) + pow(*b,2));
    printf("La longueur de l'hypoténuse est de %f cm.", c);
    free(a);
    free(b);
}