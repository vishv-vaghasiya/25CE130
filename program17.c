#include<stdio.h>

main()
{
    float distance;
    int minute=0;

    while(distance>=0||minute>0)
    {
        distance+=0.5;
        minute++;

        printf("MINUTE %d , DISTANCE COVERED=%.1f\n",minute,distance);
        sleep(1);

        if(distance>=10)
        {
            printf("MARATHON COMPLETE.");
            break;
        }
    }
}
