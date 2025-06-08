#include<stdio.h>
int main()
{
    int N[10];
    int x;
    scanf("%d",&x);
    for(int i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,x);
        x+=x;
    }
    return 0;
}
