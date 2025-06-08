#include<stdio.h>
int main()
{
    int i,tamim=0;
    float input;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&input);
        if(input>0)
        {
            tamim++;
        }
    }
    printf("%d valores positivos\n",tamim);
    return 0;
}
