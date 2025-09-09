#include<stdio.h>

main()
{
    int total_amount,discount_amount;

    printf("Enter your total amount : ");
    scanf("%d",&total_amount);

    if(total_amount<=0)
    {
        printf("\nEnter valid amount.\n");
    }

    else if(total_amount<1000)
    {
        printf("\nYou are not eligible to get discount.\n");
    }

    else if(total_amount>=1000 && total_amount<5000)
    {
        discount_amount=total_amount-(total_amount*0.1);
        printf("\nYou get 10 percentage discount,SO you should pay %d.\n",discount_amount);
    }

    else if(total_amount>=5000)
    {
        discount_amount=total_amount-(total_amount*0.2);
        printf("\nYou get 20 percentage discount,SO you should pay %d.\n",discount_amount);
    }

}
