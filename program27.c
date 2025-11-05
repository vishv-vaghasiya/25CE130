#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of months should be positive.\n");
        return 0;
    }
 int savings[n];

    savings[0] = 1;
    printf("Month 1: %d\n", savings[0]);
    if (n > 1)
    {
        savings[1] = 1;
        printf("Month 2: %d\n", savings[1]);
    }

    for (i = 2; i < n; i++)
    {
        savings[i] = savings[i - 1] + savings[i - 2];
        printf("Month %d: %d\n", i + 1, savings[i]);
    }

    return 0;
}
