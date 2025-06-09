#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    int n,m;
    cin>>n>>m;
    if(n==0&&m==0)
    {
        break;
    }
    int cnt=0;

    int a[m];
    int c[n+1]={0};
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i]>1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    }
    return 0;
}
