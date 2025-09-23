#include<stdio.h>

main()
{
    int i,j;

    for(i=1;i<=9;i++)
    {
        printf("%d",i);
    }
    printf("\n");

    for(i=2;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==i||j==10-i)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
