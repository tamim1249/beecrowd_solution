#include<stdio.h>
int main()
{
    int a,b,n,y,sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a%2==0)
        {
            a++;
        }
        for(int j=0;j<b;j++)
        {
            sum+=a;
            a+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
