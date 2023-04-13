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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (n == k)
    {
        if (v[n-1] == 1)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    
    if ((n-1) % (k-1) == 0)
    {
        if (v[n-1] == 1)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if (n%k == 0)
    {
        if (v[n-2] == 1 && v[n-1] == 1)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
        
    }
    else
    {
        if (v[0] == 1 && v[n-1] == 1)
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
        
    }
    
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}