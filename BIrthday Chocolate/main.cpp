#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }



    int d,m;
    int f=0;
    cin>>d>>m;
    int x=n-m;

    for(int i=0;i<=x;i++)
    {
        int sum=0;

        for(int j=i;j<i+m;j++)
        {

            sum=sum+arr[j];

        }

        if(sum==d)
        f++;


    }
    cout<<f;
}
