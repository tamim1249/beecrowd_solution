#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int sum=0,rem,temp;
        temp=b;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        if(sum%3==0)
        {
            printf("%d sim\n",sum);
        }
        else
        {
            printf("%d nao\n",sum);
        }
    }
    return 0;
}
