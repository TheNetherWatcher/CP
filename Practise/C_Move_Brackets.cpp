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
    string s;
    cin>>n>>s;
    int counto = 0,countc = 0, output = 0;
    for (int i = 0; i < n; i++)
    {
        int ascii = int(s[i]);
        if (ascii == 40)
        {
            counto++;
            continue;
        }
        if (ascii == 41)
        {
            countc++;
            if (countc > counto)
            {
                countc--;
                output++;
            }
            
            continue;
        }
    }
    cout<<output<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}