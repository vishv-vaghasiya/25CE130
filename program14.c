#include<stdio.h>

main()
{
    int c_bal,ch,w_bal,t_bal=5000;

    while(1)
    {
        printf("Enter 1 for withdrawing , 2 for Exit : ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter amount you want to WITHDRAW : ");
            scanf("%d",&w_bal);

            if(w_bal<=t_bal)
            {
                t_bal=t_bal-w_bal;
                printf("Remaining balance is %d .\n",t_bal);
            }
            else
            {
                printf("Insufficiant Balance.\n");
                return(1);
            }
            break;

        case 2:
            return 0;
            break;

        default:
            printf("INVALID CHOICE.\n");
            break;
        }
    }
}
