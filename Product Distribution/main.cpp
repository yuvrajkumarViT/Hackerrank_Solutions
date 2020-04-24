#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int h=0;
    h=(n/m);

    long long int k=1;
    long long int sum=0;
    long long int total=0;
    long long int j=0;
    long long int l=0;

    for(int i=0;i<(m*h)-m;i++)
    {

        for(j=i;j<i+m;j++)
        {

            total=total+arr[j];
        }



        l=k*total;

        k++;
        total=0;
        sum=sum+l;

        i=j-1;

    }
    long long int MOD=1000000007;
    long long int sum2=0;
    for(int b=(m*h)-m;b<n;b++)
    {

        sum2=sum2+arr[b];
    }
    long long int sum3=0;
    sum3=sum2*k;
    cout<<(sum+sum3)%MOD;
    return 0;
}
