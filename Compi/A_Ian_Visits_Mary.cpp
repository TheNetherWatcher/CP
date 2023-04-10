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
    lli a, b;
    cin >> a >> b;
    // if (a == 1 && b == 1)
    // {
    //     cout<<1<<endl;
    //     cout<<a<<" "<<b<<endl;
    //     return;
    // }
    if (a == 1 || b ==1)
    {
        cout<<1<<endl;
        cout<<a<<" "<<b<<endl;
        return;
    }
    else
    {
        cout<<2<<endl;
        cout<<1<<" "<<b - 1<<endl;
        cout<<a<<" "<<b<<endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}