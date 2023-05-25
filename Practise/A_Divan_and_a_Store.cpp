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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= l && a[i] <= r)
        {
            if(a[i] <= k)    
            {
                count++;
                k -= a[i];
            }
            else
            {
                break;
            }
            
        }
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}