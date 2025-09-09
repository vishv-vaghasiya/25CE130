#include<stdio.h>

main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<=0)
    {
        printf("\nEnter valid age.\n");
    }
    else if(age>0 && age<18)
    {
        printf("\nYou are not aligible for regular saving or Citizen Account.\n");
    }
    else if(age<60 && age>18)
    {
        printf("\nYou are elidible for regular saving.\n");
    }
    else if(age>=60)
    {
        printf("\nYou are eligible for Senior Citizen Account.\n");
    }
}


