#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        if(i>=38)
        {
            for(int j=i;j<i+6;j++)
            {
                if(j%5==0)
                {
                    if(j-i<3)
                    {
                        cout<<j<<"\n";
                        break;
                    }
                    else
                    {
                        cout<<i<<"\n";
                        break;
                    }
                }


            }

        }
        else
        {
            cout<<i<<"\n";
        }


    }
    return 0;
}
