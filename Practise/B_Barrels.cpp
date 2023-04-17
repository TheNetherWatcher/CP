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
    int n,k;
    cin>>n>>k;
    lli a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < k; i++)
    {
        a[n-1]+=a[n-i-2];
        
    }
    cout<<a[n-1]<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}