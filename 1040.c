#include<stdio.h>
int main()
{
    double a,b,c,d,f,avg1,avg2;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    a=a*2;
    b=b*3;
    c=c*4;
    d=d*1;
    avg1=(a+b+c+d)/10;
    printf("Media: %.1lf\n",avg1);
    if(avg1>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg1<5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&f);
        printf("Nota do exame: %.1lf\n",f);
        avg2=(avg1+f)/2;
        if(avg2>5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg2);


    }
    return 0;

}
