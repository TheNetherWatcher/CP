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
    int n;
    cin>>n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a + b + c > 1)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    solve();
}