#include<stdio.h>
#include<math.h>
int main()
{    long long int a;
     while(scanf("%lld",&a)&&a)  
     {
          printf("Brasil %.0lf x Alemanha %.lf\n",floor(1/90.0*a),ceil(7/90.0*a));
     }
}
