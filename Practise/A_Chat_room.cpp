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
    string s, h = "hello";
    int j = 0, flag = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == h[j])
        {
            j++;
            flag++;
        }
    }
    if (j == 5)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
}

int main()
{
    solve();
}