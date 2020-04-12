#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=0;
    int m=0;
    int n;
    int z=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int j=arr[i];
        if(j!=0)
        {

            for(int k=0;k<n;k++)
            {
                if(arr[k]==j)
                c++;
            }

            if(c%2!=0)
            {
                m=c-1;
                m=m/2;
                z=z+m;
            }
            else
            {
                m=c/2;
                z=z+m;
            }
            c=0;


        }


        for(int i=0;i<n;i++)
        {
            if(arr[i]==j)
            {
                arr[i]=0;
            }

        }

    }

    cout<<z;


}
