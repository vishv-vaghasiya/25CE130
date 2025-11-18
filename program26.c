#include <stdio.h>
#include <math.h>

int main()
{
    printf("NAME :-VISHV VAGHASIYA\n");
    printf("ID NO:-25CE130\n\n");

    float a, b, c, s, area;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Triangle is valid.\nArea = %.2f\n", area);
    }
    else
    {
        printf("Triangle is NOT valid.\n");
    }

    return 0;
}

