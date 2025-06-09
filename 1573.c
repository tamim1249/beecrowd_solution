#include<stdio.h>
#include<math.h>
int main()
{
    while(1){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0&&b==0&&c==0)
    {
        break;
    }
    double tamim=a*b*c;
    int r=cbrt(tamim);
    printf("%d\n",r);
    }
    return 0;

}
