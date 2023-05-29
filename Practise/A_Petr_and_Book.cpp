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
        int n, day = 1;
        cin>>n;
        for (int i = 0; i < 7; i++)
        {
            int x;
            cin>>x;
            if (x != 0)
            {
                n -= x;
                if (n > 0)
                {
                    day++;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<day<<endl;
    }
 
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        solve();
    }