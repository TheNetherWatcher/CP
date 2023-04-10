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
    if (n == 1)
    {
        cout<<1<<endl;
    }
    if (n == 2)
    {
        cout<<-1<<endl; 
    }
    if(n > 2)
    {
        int a = 0 , b = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = a; j < b; j++)
            {
                if (j % 2 == 0)
                {
                    if (j == 0)
                    {
                        cout<<j + 1<<" ";
                    }
                    else
                    {
                        cout<<j<<" ";
                    }
                }
                if (j % 2 == 1)
                {
                    cout<<j + 2<<" ";
                }
                
            }
            cout<<endl;
            a += n;
            b += n;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}