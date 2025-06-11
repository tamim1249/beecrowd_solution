#include<stdio.h>
#define MAX 61
int main()
{
    int i,n,a;
    unsigned long long fib[MAX];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=MAX;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        printf("Fib(%d) = %llu\n",a,fib[a]);
    }
    return 0;
}
