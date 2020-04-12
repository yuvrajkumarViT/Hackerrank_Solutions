
#include <iostream>
using namespace std;

int main()
{
    char c; int cnt=0, level = 0;
    while (cin >> c)
    {

        if (c=='U')
        {
            if (level == -1)
                cnt+= 1;
            level+= 1;
        }
        if (c=='D')
        {
            level-= 1;
        }
    }
    cout << cnt;
}
