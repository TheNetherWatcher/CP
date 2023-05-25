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
        int a[3], n;
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }
        cin>>n;
        sort(a, a + 3);
        int m1 = a[2] - a[0], m2 = a[2] - a[1];
        if (m1 + m2 > n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            n = n - m1 - m2;
            if (n % 3 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
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