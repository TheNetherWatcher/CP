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
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        int x = (int)s[i];
        if (x == 65 || x == 97 || x==69 || x == 101 || x ==73 || x == 105 || x == 79 || x == 111 || x == 85 || x == 117 || x == 89 || x == 121)
        {
            continue;
        }
        else
        {
            if (x > 96)
            {
                cout<<"."<<(char)x;
            }
            else
            {
                int y = x + 32;
                cout<<"."<<(char)y;
            }
            
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    solve();
}