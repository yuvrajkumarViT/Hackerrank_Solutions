#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        string l = "abcdefghijlkmnopqrstuvwxyz";
        string op = "NO";
        for (int i=0;i<l.size();i++){
            if (s1.find(l[i])!=string::npos && s2.find(l[i])!=string::npos){
                op = "YES";
                break;
            }
        }
        cout << op << endl;
    }
    return 0;
}
