#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float snack;
    float tam[5]={4.00,4.50,5.00,2.00,1.50};
    snack=tam[a-1]*b;
    printf("Total: R$ %.2f\n",snack);
    return 0;

}
