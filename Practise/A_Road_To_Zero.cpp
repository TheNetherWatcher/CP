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
    lli x,y,a,b;
    cin>>x>>y>>a>>b;
    if (x == y)
    {
        if (b >= 2*a)
        {
            cout<<2*a*x<<endl;
            return;
        }
        else
        {
            cout<<b*x<<endl;
            return;
        }
    }
    if (x > y)
    {
        lli price1 = y*b + (x-y)*a;
        lli price2 = (x+y)*a;
        if (price1 > price2)
        {
            cout<<price2<<endl;
        }
        else
        {
            cout<<price1<<endl;
        }
    }
    if(x < y)
    {
        lli price1 = x*b + (y-x)*a;
        lli price2 = (x+y)*a;
        if (price1 > price2)
        {
            cout<<price2<<endl;
        }
        else
        {
            cout<<price1<<endl;
        }
        
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}