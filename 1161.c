#include<stdio.h>
int main()
{
     int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        long long s=1,t=1;;
        for(int i=1;i<=a;i++)
        {
            s*=i;
        }
        for(int j=1;j<=b;j++)
        {
            t*=j;
        }
        long long g=s+t;
        printf("%lld\n",g);
    }
    return 0;
}
