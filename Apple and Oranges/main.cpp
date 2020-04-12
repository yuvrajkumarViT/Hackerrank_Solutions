#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    int t;
    int a;
    int b;
    int m;
    int n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int arra[m];
    int arrb[n];
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        int y=x+a;
        arra[i]=y;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int y=x+b;
        arrb[i]=y;
    }
    int c=0;
    int d=0;
    for(int i=0;i<m;i++)
    {
        if(arra[i]>=s && arra[i]<=t)
        {
            c++;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(arrb[i]>=s && arrb[i]<=t)
        {
            d++;
        }

    }
    cout<<c<<"\n";
    cout<<d<<"\n";

}
