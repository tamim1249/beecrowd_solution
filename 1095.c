#include<stdio.h>
int main()
{
    int i,I=1,J=60;
    for(i=0;i<13;i++)
    {
        printf("I=%d J=%d\n",I,J);
        I=I+3;
        J=J-5;
    }
    return 0;
}
