#include<stdio.h>
int main()
{
    int data,count;
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&data);
        if(data%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}
