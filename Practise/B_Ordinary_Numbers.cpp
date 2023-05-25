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
    int n;
    bool flag = true;
    int count = 0;
    cin>>n;
    while (flag)
    {
        count+=n;
        if (n<10)
        {
            flag = false;
        }
        else
        {
            n = n/10;
            if (n % 10 == 0)
            {
                /* code */
            }
            
        }
        
    }
    
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