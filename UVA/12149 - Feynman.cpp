#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    while(cin >> n)
    {
        ll sum=0;
        if(n==0) break;
        for(ll i=1;i<=n;i++)
        {
            sum+=i*i;
        }
        cout << sum << endl;
    }

    return 0;
}
