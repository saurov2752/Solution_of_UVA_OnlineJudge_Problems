#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    while(cin >> n)
    {
        if(n==0) break;
        else
        {
            ll f=0,m=1,sum;
            for(ll i=0;i<n;i++)
            {
                sum=f+m;
                f=m;
                m=sum;
            }
            cout << sum << endl;
        }
    }

    return 0;
}
