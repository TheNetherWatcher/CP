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
    int n,k;
    cin>>n>>k;
    int x, output = k + 1, count0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x == 0)
        {
            count0++;
        }
    }
    
    cout<<output<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    solve();
}