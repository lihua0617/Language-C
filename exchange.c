#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
    int *x = malloc(sizeof(int));
    printf("Quelle est la data x?");
    scanf("%i", x);

    int *y = malloc(sizeof(int));
    printf("Quelle est la data y?");
    scanf("%i", y);

    printf("x is %i, y is %i\n", *x, *y);
    swap(x, y);
    printf("x is %i, y is %i\n", *x, *y);
    
    free(x); 
    free(y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
