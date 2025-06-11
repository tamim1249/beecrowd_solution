#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int c=a*b;
        int d=c*2;
        printf("%d\n",d);
    }
    return 0;
}
