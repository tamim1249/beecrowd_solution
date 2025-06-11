#include<stdio.h>
int main()
{
    int n,sum=0,count=0,avg;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
            {
                break;
            }
            else if(n>0)
            {
               count++;
            }
        sum+=n;
    }
    printf("%.2f\n",(float)sum/count);


    return 0;
}
