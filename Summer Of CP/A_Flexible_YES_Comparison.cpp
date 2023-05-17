#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define ulli unsigned long long int
#define ull unsigned long long
// use incase of input and output file
// freopen(input.txt,r,stdin);
// freopen(output.txt,w,stdout);

void solve()
{
    string s;
    cin>>s;
    if ((s[0] == 'y') || (s[0] == 'Y'))
    {
        if ((s[1] == 'e') || (s[1] == 'E'))
        {
            if ((s[2] == 's') || (s[2] == 'S'))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}