#include<stdio.h>
int main()
{
    int a[20],k;
    for(int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);

    }

    for(int i=0;i<20;i++)
    {
        k=a[19-i];
        //19=19-19=0
       // temp=a[i];
        //a[i]=a[19-i];
        //a[19-i]=temp;
        //0==20-0=20=19
        //1=19-1=18
        //2=19-2

      printf("N[%d] = %d\n",i,k);


    }
    return 0;

}
