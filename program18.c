#include<stdio.h>

main()
{
    int i,j;

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
}
