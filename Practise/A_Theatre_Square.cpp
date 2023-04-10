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
    ulli n,m,a, side1 = 0, side2 = 0;
    cin>>n>>m>>a;
    if (m % a == 0)
    {
        side2 = m/a;
    }
    if (m % a != 0)
    {
        side2 = m/a + 1;
    }
    if (n % a == 0)
    {
        side1 = n/a;
    }
    if(n % a != 0)
    {
        side1 = n/a + 1;
    }
    cout<<side1*side2<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    solve();
}