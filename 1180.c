#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10000],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],pos=0;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;


}
