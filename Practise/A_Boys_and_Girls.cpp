#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define ulli unsigned long long int
#define ull unsigned long long

void solve()
{
    ull int n,m;
    cin>>n>>m;
    ull int minnm = min(m,n), maxnm = max(m,n);
    for (ulli i = 0; i < maxnm; i++)
    {
        if (i < minnm)
        {
            cout<<"BG";
        }
        else
        {
            if (maxnm == n)
            {
                cout<<"B";
            }
            else
            {
                cout<<"G";
            }
            
        }
        
    }
    
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    solve();
}