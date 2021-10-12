#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("voiture.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char *model = malloc(12);
    printf("model: ");
    scanf("%s", model);

    char *plate = malloc(12);
    printf("plate: ");
    scanf("%s", plate);

    fprintf(file, "%s,%s\n", model, plate);

    fclose(file);

    free(model);
    free(plate);

}