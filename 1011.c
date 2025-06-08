#include<stdio.h>
int main()
{
    double x,y,result;
    x=3.14159;
    scanf("%lf",&y);
    result=(4.0/3)*3.14159*(y*y*y);
    printf("VOLUME = %.3lf\n",result);
    return 0;
}
