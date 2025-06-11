#include<stdio.h>
int main()
{
    int x;
    float a,b;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%f%f",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",a/b);
        }

    }
    return 0;
}
