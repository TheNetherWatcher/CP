#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin>>a;
    float n = 360 / (180 - a);
    if(n == floor(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
} 

int main()
{
    int t;
    cin>>t;
    while(t--) 
    solve();
}