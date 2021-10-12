#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void)
{
    int *x = malloc(sizeof(int));
    printf("Quelle est la data x?");
    scanf("%i", x);

    int *y = malloc(sizeof(int));
    printf("Quelle est la data y?");
    scanf("%i", y);
    
    int z = (*x) * (*y);
    printf("leur produit est: %i", z);
    
    free(x); 
    free(y);
}