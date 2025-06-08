#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        double a,b,c,avg;
        scanf("%lf%lf%lf",&a,&b,&c);
        a=a*2;
        b=b*3;
        c=c*5;
        avg=(a+b+c)/10.00;
        printf("%.1lf\n",avg);

    }
    return 0;
}
