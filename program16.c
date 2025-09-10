#include<stdio.h>

main()
{
    int computer_stick,user_stick;
    int stick=21;

    printf("THERE ARE 21 MATCHSTICKS , YOU CAN PICK 1,2,3,4 MATCHSTICKS.\n");

    do
    {
        printf("THERE ARE %d MATCHSTICKS REMAIN\n",stick);

        scanf("%d",&user_stick);
        stick=stick-5;

        if(user_stick>0 && user_stick<5)
        {
            if(stick==1)
            {
                computer_stick=5-user_stick;
                printf("COMPUTER PICK %d MATCHSTICK.\n",computer_stick);
                printf("YOU LOST THE GAME BCZ LASTMATCH STICK IS PICK BY YOU.\n");
            }
            else
            {
                computer_stick=5-user_stick;
                printf("COMPUTER PICK %d MATCHSTICK.\n",computer_stick);
                printf("CHOOSE MATCHSTICK BETWEEN 1-4.\n");
            }
        }

        else
        {
            printf("ENTER MATCHSTICKS 1,2,3,4 ; NOT ANY OTHER NUMBER.\n");
            break;
        }
    }while(stick>1);
}
