#include<stdio.h>
#include<math.h>
int main()
{
    int g;
    scanf("%d",&g);
    while(g--){
    
    int n,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        d=d+pow(2,i);
    }
    printf("%d\n",d);
    }
    return 0;
}
