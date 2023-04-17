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
	string s;
    bool flag = false;
    getline(cin,s);
    unordered_set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.insert(s[i]);
        
    }
    st.erase('{');
    st.erase('}');
    st.erase(' ');
    st.erase(',');
    cout<<st.size()<<endl;
}

int main()
{
	solve();
}