#include<stdio.h>
int main()
{
    int n;
    while(1){
    scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int pos;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max==a[i])
            {
        a[i]=-20000;
        break;
    }
    }

    max=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i+1;
        }
    }
   
    printf("%d\n",pos);
    }
    return 0;
}
