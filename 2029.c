#include<stdio.h>
int main()
{
   double a,b,c,d,e;
   while(scanf("%lf%lf",&a,&b)!=EOF){
   c=b/2;
   d=3.14*c*c;
   e=a/d;
   printf("ALTURA = %.2lf\n",e);
   printf("AREA = %.2lf\n",d);
   }
   return 0;



}

