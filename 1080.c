#include<stdio.h>
int main()
{
    int n,p,j=0;
    for(int i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>j)
        {
            j=n;
            p=i;
        }


    }
    printf("%d\n%d\n",j,p);
    return 0;
}
