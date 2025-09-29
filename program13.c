#include<stdio.h>

main()
{
    int x;

    for(x=10;x<=100;x=x+10)
    {
        printf("CURRENT WATER LEVEL : %d LITERS",x);

        if(x%100==0)
        {
            printf("(TANK IS FULL)");
        }

        sleep(1);

        printf("\n");
    }
}

