#include<stdio.h>
int main()
{
    for(int i=0;i<39;i++)
    {
        printf("-");

    }
    printf("\n");
    for(int j=0;j<5;j++)
    {
        printf("|");
        for(int k=0;k<37;k++)
        {
            printf(" ");
        }
        printf("|");
        printf("\n");
    }
    for(int l=0;l<39;l++)
    {
        printf("-");
    }
    printf("\n");
    return 0;

}
