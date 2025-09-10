#include<stdio.h>

main()
{
    int i,j;
    int start=1,end=9;


    for(i=start;i<=end;i++)
    {
        printf("%d  ",i);
    }
    printf("\n");

    for(i=2;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        printf("%d",i);

         int spaces=(end-2*i+1)*2;

        if(spaces>0)
        {
            for(j=0;j<spaces;j++)
            {
                printf(" ");
            }
            printf("%d",end-i+1);
        }
        printf("\n");
    }
}
