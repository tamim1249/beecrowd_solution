#include<stdio.h>
#include<math.h>
int main()
{



    double a,b,c,d,e,n;
    while( scanf("%lf%lf%lf%lf",&n,&a,&b,&c)!=EOF){
    d=a*a+b*b;
    e=sqrt(d);
    double g=e*n;
    double h=g*c;
    double i=h/10000;
    printf("%.4lf\n",i);
    }
    return 0;


}
