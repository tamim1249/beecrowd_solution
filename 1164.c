#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,t=0;
        scanf("%d",&a);
        for(int i=1;i<a;i++)
        {
             if(a%i==0)
            {
                t+=i;
            }
        }
        if(t==a)
        {
            printf("%d eh perfeito\n",a);
        }
        else
        {
            printf("%d nao eh perfeito\n",a);
        }
    }
    return 0;
}
