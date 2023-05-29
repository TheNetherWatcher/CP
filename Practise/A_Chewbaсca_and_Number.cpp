#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,nx;
    int count = 0;
    cin>>n;
    nx = n;
    while (nx)
    {
        count++;
        nx = nx/10;
    }
    int a[count], i = 0;
    while (n)
    {
        a[i] = n % 10;
        n = n/10;
        i++;
    }
    if (a[count - 1] == 9)
    {
        cout<<a[count - 1];
    }
    else
    {
        if (a[count - 1] > 4)
        {
            cout<<9 - a[count - 1]; 
        }
        else
        {
            cout<<a[count - 1];
        }
    }
    for (int i = count - 2; i >= 0 ; i--)
    {
        if (a[i] > 4)
        {
            cout<<9 - a[i];
        }
        else
        {
            cout<<a[i];
        }
    }
    cout<<endl;
}