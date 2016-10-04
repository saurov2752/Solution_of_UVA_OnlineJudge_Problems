#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll power(ll n)
{
    ll sum=1;
    for(ll i=0; i<3; i++)
    {
        sum*=n;
    }
    return sum;
}

int main()
{
    ll n;
    while(cin >> n)
    {
        ll sum=0;
        for(ll i=1; i<=n; i++)
        {
            ll x=power(i);
            sum+=x;
        }
        cout << sum << endl;
    }

    return 0;
}
