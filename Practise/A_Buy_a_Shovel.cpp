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
	int k,r, output = 0;
    cin>>k>>r;
    for (int i = 1; i < 10; i++)
    {
        int something = (i*k);
        if ((something - r)%10 == 0)
        {
            output = i;
            break;
        }
        if (something%10 == 0)
        {
            output = i;
            break;
        }
    }
    cout<<output<<endl;
}

int main()
{
	solve();
}