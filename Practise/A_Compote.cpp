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
    int a,b,c, count = 0;
    cin>>a>>b>>c;
    int n = a;
    for (int i = 0; i < n; i++)
    {
        a-=1;
        b-=2;
        c-=4;
        if (b < 0 || c < 0)
        {
            break;
        }
        count+=7;
    }
    cout<<count<<endl;
}

int main()
{
    solve();
}