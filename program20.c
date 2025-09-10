#include<stdio.h>

main()
{
    int n,i,asum=0,esum,missing;

    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n-1];

    for(i=0;i<n-1;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    }

    esum=n*(n+1)/2;
    missing=esum-asum;
    printf("\nThe Missing ID :%d",missing);

}

