#include<stdio.h>

main()
{
    float t_c,t_f;

    printf("Enter your Temperature in Celsius = ");
    scanf("%f",&t_c);
    t_f=(1.8*t_c)+32;//Here,9/5=1.8

    printf("\nYour Temperature in Fahrenhit = %f \n",t_f);
}
