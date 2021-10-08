#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string age;
    string movie[3];
}
weekend;

int main(void)
{
    weekend categoire[3];

    categoire[0].name = "Adulte";
    categoire[0].age = ">= 18ans";
    categoire[0].movie[0] = "The Shining";
    categoire[0].movie[1] = "La Nonne";
    categoire[0].movie[2] = "Conjuring";

    categoire[1].name = "Ados";
    categoire[1].age = ">= 11ans & <18ans";
    categoire[1].movie[0] = "Breakfast Club";
    categoire[1].movie[1] = "Hunger Games";
    categoire[1].movie[2] = "American Pie";

    categoire[2].name = "Enfant";
    categoire[2].age = "<11ans";
    categoire[2].movie[0] = "Toy Story";
    categoire[2].movie[1] = "Dragons";
    categoire[2].movie[2] = "Aladdin";


    int a = get_int("Vous avez quel age: ");
    int n;

    // different categoires
    if( a >= 18)
    {
        n = 0;
    }
    else if((a >= 11) & (a < 18))
    {
        n = 1;
    }
    else 
    {
        n = 2;
    }

    // i loop - choices of categoires
    for(int i = n; i < 3; i++)
    {
        printf("Found movies for %s:\n%s, %s, %s\n", categoire[i].name, categoire[i].movie[0],categoire[i].movie[1],categoire[i].movie[2]);
        
        // j loop - choices of movies
        for (int j = 0; j < 3; j++)
        {
            char s = get_char("If you choose %s, press Y, else press N.\n", categoire[i].movie[j]);
            if (s == 'Y' || s == 'y')
            {
                printf("You choose %s, enough your time!", categoire[i].movie[j]);
                return 1;
            }

        }
    }

    // didn't choose any movie
    printf("Sorry for this weekend, we will have other movies next weekend!");
}
