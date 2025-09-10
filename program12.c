#include<stdio.h>

main()
{
    int i;

    for(i=1;i<=50;i++)
    {
        printf("BOOK ID : %d",i);

        if(i%5==0)
        {
            printf("(SPECIAL EDDITION)");
        }

        printf("\n");
    }
}

