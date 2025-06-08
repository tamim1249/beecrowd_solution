#include<stdio.h>
int main()
{
    int str1,str2,d1,d2,h1,h2,m1,m2,s1,s2,w,x,y,z,data;
    char dia1[5],dia2[5],del[5];

    scanf("%s%d%d%s%d%s%d",dia1,&d1,&h1,del,&m1,del,&s1);

    scanf("%s%d%d%s%d%s%d",dia2,&d2,&h2,del,&m2,del,&s2);

    str1=s1+m1*60+h1*60*60+d1*24*60*60;
    str2=s2+m2*60+h2*60*60+d2*24*60*60;

    data=str2-str1;
    w=data/(24*60*60);
    x=(data-w*24*60*60)/(60*60);
    y=(data-w*24*60*60-x*60*60)/60;
    z=(data-w*24*60*60-x*60*60-y*60);
    printf("%d dia(s)\n",w);
    printf("%d hora(s)\n",x);
    printf("%d minuto(s)\n",y);
    printf("%d segundo(s)\n",z);
    return 0;


}
