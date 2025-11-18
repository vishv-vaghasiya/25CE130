#include <stdio.h>

union Book
{
    int accNo;
    float price;
    char title[50];
};

int main()
{
    printf("NAME :-VISHV VAGHASIYA\n");
    printf("ID NO:-25CE130\n\n");

    union Book b;
    printf("Enter accession number: ");
    scanf("%d", &b.accNo);
    printf("Accession No: %d\n", b.accNo);

    printf("Enter price: ");
    scanf("%f", &b.price);
    printf("Price: %.2f\n", b.price);

    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Book Title: %s\n", b.title);

    return 0;
}

