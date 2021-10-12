#include <stdio.h>
#include <stdlib.h>


int *bigger (int a, int b);

int main(void)
{
    int x, y, z;
    printf("x: \n");
    scanf("%i", &x);
    printf("y: \n");
    scanf("%i", &y);
    printf("z: \n");
    scanf("%i", &z);
    
    int s = *(bigger(x, y));
    int t = *(bigger(s, z));
    printf("the biggest is: %i", t);
}

int *bigger (int a, int b)
{
    if (a > b)
    {
        return &a;
    }
    else
    {
        return &b;
    }
}
