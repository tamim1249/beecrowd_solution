#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int x;
        scanf("%d",&x);
        int a[x];
        int sum=0;
        for(int i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<x;i++)
        {
            sum+=a[i];
        }
        float avg;
        avg=sum/x;
        int count=0;
        for(int i=0;i<x;i++)
        {
            if(avg<a[i])
            {
               count++;
            }
        }
        double t=count*100;
        double v=t/x;
        printf("%.3lf%%\n",v);
    }
    return 0;
}
