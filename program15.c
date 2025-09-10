#include<stdio.h>

main()
{
    int s;

    printf("Enter the number for countdown : ");
    scanf("%d",&s);

    if(s>0 & s<=100)
    {
        for(s;s;s--)
        {
            printf("%d\n",s);
            sleep(1);
        }
        printf("COUNTDOWN COMPLITED.\n");
    }
}
