#include <stdio.h>
int main()
{
    int par[5], impar[5];
    int c1 = 0, c2 = 0;
    int num;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par[c1++] = num;
            if (c1 == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, par[j]);
                c1 = 0;
            }
        }
        else
        {
            impar[c2++] = num;
            if (c2 == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, impar[j]);
                c2 = 0;
            }
        }
    }


    for (int i = 0; i < c2; i++)
        printf("impar[%d] = %d\n", i, impar[i]);


    for (int i = 0; i < c1; i++)
        printf("par[%d] = %d\n", i, par[i]);

    return 0;
}
