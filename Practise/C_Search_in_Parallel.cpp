#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define ulli unsigned long long int
#define ull unsigned long long

void solve()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n+m; i++)
    {
        if (i % 2 == 0)
        {
            cout<<"B";
            n--;
            // continue;
        }
        if (i % 2 == 1)
        {
            cout<<"G";
            m--;
        }
        if (n == 0 || m == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"B";
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"G";
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}