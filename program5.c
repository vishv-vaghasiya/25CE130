#include<stdio.h>

main()
{
    double t_population=1441981744;

    float w_percentage=48.4;
    float m_percentage=100-w_percentage;

    float l_m_percentage=80.95;
    float l_w_percentage=62.84;

    double t_w=t_population*w_percentage/100;
    double t_m=t_population-t_w;

    double l_m=t_m*l_m_percentage/100;
    double l_w=t_w*l_w_percentage/100;

    double il_m=t_m-l_m;
    double il_w=t_w-l_w;

    printf("Total Population     =%lf\n",t_population);
    printf("Total Men            =%lf\n",t_m);
    printf("Total Women          =%lf\n",t_w);
    printf("Literate Men         =%lf\n",l_m);
    printf("Literate Women       =%lf\n",l_w);
    printf("Illiterate Men       =%lf\n",il_m);
    printf("Illiterate women     =%lf\n",il_w);
}
