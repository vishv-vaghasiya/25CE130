#include<stdio.h>

main()
{
    int a,fa=0;
    int y;

    printf("Choose any food from the menu.\n");
    printf("1.Burger      = 150 rupees.\n");
    printf("2.Pizza       = 200 rupees.\n");
    printf("3.Pasta       = 120 rupees.\n");
    printf("4.Sandwich    = 100 rupees.\n");
    printf("5.FrenchFries = 80 rupees.\n");
    printf("6.For total amount of bill.\n");

    x:printf("\nChoose a number = ");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        fa=fa+150;
        break;

    case 2:
        fa=fa+200;
        break;

    case 3:
        fa=fa+120;
        break;

    case 4:
        fa=fa+100;
        break;

    case 5:
        fa=fa+80;
        break;

    case 6:
        goto y;

    default:
        {
            printf("Sorry,Your item is not available.\n");
        }
    }
    goto x;
    y:printf("Your total bill is %d.\n",fa);
    getch();
}
