#include<stdio.h>

main()
{
    int age;

    printf("Enter your age :");
    scanf("%d",&age);

    if(age<=0)
    {
        printf("\nEnter valid age.\n");
    }
    else if(age<=12)
    {
        printf("\nTicket are free for adult.\n");
    }
    else if(age>=60)
    {
        printf("\nTicket are paid for senior citizen at 5 to 10 percent discount.\n");
    }
}
