#include<stdio.h>
int main()
{
    float data,sum=0;
    int positive=0;
    for(int i=1;i<=6;i++)
    {
        scanf("%f",&data);
        if(data>0)
        {
            positive++;
            sum+=data;
        }
    }
    printf("%d valores positivos\n%.1f\n",positive,sum/positive);
    return 0;
}
