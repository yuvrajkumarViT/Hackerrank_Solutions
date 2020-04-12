#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k=0;
    cin>>n;
    int arr[n];
    int arra[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int h=n-2;




    for(int i=0;i<n;i++)
    {
        int j=i;


        if(i<n-2 && arr[i+2]==0)
         {
              c++;

            j++;

         }
         else if(i<n-2 && arr[i+2]==1)
         {
              if(arr[i+1]==0)
                c++;



         }
         if(i==h && arr[i+1]==0)
         {
             c++;

             j++;
         }

         i=j;










    }
    cout<<c;

}
