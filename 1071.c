#include<stdio.h>
int main()
{
    int start,end,temp,sum=0;
    scanf("%d%d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    for(start=start+1;start<=end-1;start++)
    {
        if(start%2 !=0)
        {


            sum+=start;
        }
    }
    printf("%d\n",sum);
    return 0;
}
