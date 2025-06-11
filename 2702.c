#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,v,f,g,h;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
    if(x>a||x==a)
    {
        f=x-a;
    }
    if(y>b||y==b)
    {
        g=y-b;
    }
    if(z>c||z==c)
    {
        h=z-c;
    }
    v=(f+g+h);
    printf("%d\n",v);
    return 0;
}
