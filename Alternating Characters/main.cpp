#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int c=0;
    while(n--)
    {
        string s;
        cin>>s;
        cin.ignore();

        for(int i=0;i<s.length()-1;i++)
        {



            if(s[i]=='A')
            {
                if(s[i+1]=='A')
                {
                    c++;


                }

            }
            if(s[i]=='B')
            {
                if(s[i+1]=='B')
                {
                    c++;


                }

            }

        }
        cout<<c<<"\n";
        c=0;

    }
}
