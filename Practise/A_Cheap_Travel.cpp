#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int p = (float)b/(float)m;
    if (p >= a)
    {
        cout<<a*n<<endl;
    }
    else
    {
        int num = n/m, rem = n%m;
        if(rem*a > b)
        {
            cout<<num*b + b<<endl;
        }
        else
        {
            cout<<num*b + rem*a<<endl;
        }
        
    }
    
}