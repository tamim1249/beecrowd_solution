#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8]={1,2,6,24,120,720,5040,40320};
    int n;
    cin>>n;
    int c=0;
    for(int i=7;i>=0;i--)
    {
        while(n>=a[i])
        {
            n=n-a[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
