#include<stdio.h>

main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);

    (marks>=90&&marks<100)?printf("\nGrade A\n"):
        (marks>=80&&marks<90)?printf("\nGrade B\n"):
            (marks>=70&&marks<80)?printf("\nGrade C\n"):
                (marks>=60&&marks<70)?printf("\nGrade D\n"):
                    (marks<60&&marks>0)?printf("\nGrade F\n"):printf("\nEnter valid input.\n");
}
