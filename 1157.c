#include<stdio.h>
int main()
{
    int tamim;
    scanf("%d",&tamim);
    for(int i=1;i<=tamim;i++)
    {
        if(tamim%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
