#include<stdio.h>

void main()
{
    int arr[25],i,ce=0,co=0,cp=0,cn=0;

    for(i=0;i<25;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        {
           cp++;
        }
        else
        {
            cn++;
        }
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }

    printf("Total positive numbers is %d\n",cp);
    printf("Total negative numbers is %d\n",cn);
    printf("Total even numbers is %d\n",ce);
    printf("Total odd numbers is %d\n",co);
}
