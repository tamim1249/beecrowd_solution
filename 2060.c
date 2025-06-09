#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int x=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            x++;
        if(a[i]%3==0)
        {
            b++;
        }
        if(a[i]%4==0)
        {
            c++;
        }
        if(a[i]%5==0)
        {
            d++;
        }
    }
    printf("%d Multiplo(s) de 2\n",x);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);
}
