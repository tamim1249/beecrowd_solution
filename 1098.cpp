#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i=0;
    while(i<=2.2)
    {
        int j=1;
        while(j<4)
        {
            cout<<"I="<< i<<" J="<<i+j<<endl;
            j++;
        }
        i+=0.2;
    }
    return 0;
}
