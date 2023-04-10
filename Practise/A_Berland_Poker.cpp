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
    int n,m,k;
    cin>>n>>m>>k;
    int cperp = n / k;
    if (m <= cperp)
    {
        cout<<m<<endl;
        return;
    }
    else
    {
        if (n == k)
        {/
            if (m == 1)
            {
                cout<<1<<endl;
                return;
            }
            else
            {
                cout<<0<<endl;
                return;
            }
        }
        else
        {
            cout<< 2 * cperp - m + ((k-2)*(k-1)) / 2 <<endl; 
        }
        
    }
    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}