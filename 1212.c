#include<stdio.h>
int tamim(unsigned a, unsigned b)
{
    int count=0,sum=0,carry=0;
    while(a>0||b>0)
    {
        int digit1=a%10;
        int digit2=b%10;
        sum=digit1+digit2+carry;
        if(sum>=10)
        {
            count++;
            carry=1;
        }
        else
        {
            carry=0;
        }
        a/=10;
        b/=10;
    }
    return count;
}
int main()
{
    unsigned a,b;
    while(1){
    scanf("%u%u",&a,&b);
    if(a==0&&b==0)
    {
        break;
    }
    int count=tamim(a,b);
    if(count==0)
    {
        printf("No carry operation.\n");
    }
    else if(count==1)
    {
        printf("1 carry operation.\n");
    }
    else
    {
        printf("%d carry operations.\n",count);
    }
    }
    return 0;

}
