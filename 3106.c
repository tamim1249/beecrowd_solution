#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]/=3;
        sum+=a[i]*3;

    }
    cout<<sum<<endl;
    return 0;
}
