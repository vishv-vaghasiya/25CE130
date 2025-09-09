#include<stdio.h>

main()
{
    float height,weight,BMI;

    printf("Enter your Height:");
    scanf("%f",&height);
    printf("Enter your Weight:");
    scanf("%f",&weight);
    printf("\nHeight=%.2f & Weight=%.2f",height,weight);

    if(height>0 && weight>0)
    {
        BMI=weight/(height*height);
        printf("\nYour BMI=%f\n",BMI);
    }
    else
    {
        printf("\nEnter correct value.");
    }
}
