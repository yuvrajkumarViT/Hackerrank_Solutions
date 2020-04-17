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
    int lc=0;
    int mc=0;
    int l=arr[0];
    int m=arr[0];
    for(int i=1;i<n;i++)
    {

        if(arr[i]>l)
        {
            l=arr[i];
            lc++;

        }
        if(arr[i]<m)
        {
            m=arr[i];
            mc++;

        }

    }
    cout<<lc<<" "<<mc;
}
