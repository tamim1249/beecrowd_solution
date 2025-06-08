#include<stdio.h>
int main()
{
    float a,salary,bonus;
    int p;
    scanf("%f",&a);
    if(a>=0&&a<=400)
    {
        p=15;
        bonus=(a*p)/100.00;
        salary=a+bonus;

    }
    else if(a>400.0&&a<=800)
    {
        p=12;
        bonus=(a*p)/100.00;
        salary=a+bonus;
    }
    else if(a>800.0&&a<=1200)
    {
        p=10;
    bonus=(a*p)/100.00;
    salary=a+bonus;
    }
    else if(a>1200.0&&a<=2000.00)
    {
        p=7;
        bonus=(a*p)/100.00;
        salary=a+bonus;
    }
    else if(a>2000.00)
    {
        p=4;
        bonus=(a*p)/100.00;
        salary=a+bonus;
    }
    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",bonus);
    printf("Em percentual: %d %%\n",p);
    return 0;


}
