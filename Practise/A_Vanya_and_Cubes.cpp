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
    int n, count = 0, p = 0, s = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        p = p + i + 1;
        s += p;
        if (s <= n)
        {
            count++;
        }
        else
        {
            break;
        }
        
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}