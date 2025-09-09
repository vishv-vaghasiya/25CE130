#include<stdio.h>

int main()
{
    int length,breadth;
    int area,per;

    length=70;
    breadth=90;
    area=length*breadth;
    per=2*(length+breadth);

    printf("Length = %d\n",length);
    printf("Breadth = %d\n",breadth);
    printf("Calculate the , Area = Length*Breadth = %d\n",area);
    printf("Calculate the , perimeter = 2*(Length+Breadth) = %d\n",per);

    return 0;
}
