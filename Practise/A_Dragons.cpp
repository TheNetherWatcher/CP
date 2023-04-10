#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define ulli unsigned long long int
#define ull unsigned long long
//use incase of input and output file
//freopen(input.txt,r,stdin);
//freopen(output.txt,w,stdout);

void solve()
{
    int s,n;
    cin>>s>>n;
    bool flag = false;
    pair<int,int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        if (s > p[i].first)
        {
            s += p[i].second;
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    if(flag)
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

int main()
{
    solve();
}