#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        int n,count=0;
        scanf("%d",&n);
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d eh primo\n",n);
        }
        else{
            printf("%d nao eh primo\n",n);
        }
    }
    return 0;
}
