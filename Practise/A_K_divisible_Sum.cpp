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
    lli n,k;
    cin>>n>>k;
    lli divide = k / (float)n;
    if(k > n)
    {
        if (k % n != 0)
        {
            if (n*divide == n*((float)k))
            {
                cout<<k/n<<endl;
            }
            else
            {
                cout<<k/n + 1<<endl;
            }
        }
        else
        {
            cout<<k/n<<endl;
        }
        
    }
    if (k == n)
    {
        cout<<1<<endl;
        return;
    }
    
    if (k < n)
    {
        if (n % k == 0)
        {
            cout<<1<<endl;
            return;
        }
        else
        {
            cout<<2<<endl;
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