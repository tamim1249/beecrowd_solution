#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int cn=1;cn<=n;cn++)
    {
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int mid=m/2;
        int g=a[mid];
        cout<<"Case "<<cn<<":"<<" "<<g<<endl;
    }
    return 0;
}
