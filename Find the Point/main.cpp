#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int p1,q1,p2,q2;
        cin>>p1>>q1>>p2>>q2;
        cout<<(2*p2)-p1<<" "<<(2*q2)-q1<<"\n";
    }

}
