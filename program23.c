#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of days :");
    scanf("%d",&n);

    int prices[n];
    printf("Enter prices of fruit for %d days :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }

    int maxprofit=0;
    int buyday=0,sellday=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int profit=prices[j]-prices[i];
            if(profit>maxprofit)
            {
                maxprofit=profit;
                buyday=i;
                sellday=j;
            }
        }
    }

    printf("Maximum profit = %d\n",maxprofit);

    if(maxprofit>0)
    {
        printf("Buy on day %d (price=%d)\n",buyday+1,prices[buyday]);
        printf("Sell on day %d (prices=%d)\n",sellday+1,prices[sellday]);
    }
    else
    {
        printf("No profit is possible.\n");
    }

    return 0;
}
