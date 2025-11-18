#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("NAME:-VISHV VAGHASIYA\n");
    printf("ID  :-25CE130\n\n");

    char *summary;
    int size;

    printf("Enter initial size of summary (in bytes): ");
    scanf("%d", &size);
    getchar();

    summary = (char *)calloc(size, sizeof(char));
    if (summary == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter short summary: ");
    fgets(summary, size, stdin);

    printf("\nInitial Summary: %s\n", summary);

    printf("Enter new size to expand summary (in bytes): ");
    scanf("%d", &size);
    getchar();

    summary = (char *)realloc(summary, size * sizeof(char));
    if (summary == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter updated (longer) summary: ");
    fgets(summary, size, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    return 0;
}

