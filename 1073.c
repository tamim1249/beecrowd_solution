#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=2;i<=a;i=i+2)
    {
        printf("%d^2 = %d\n",i,(i*i));

    }
    return 0;
}

