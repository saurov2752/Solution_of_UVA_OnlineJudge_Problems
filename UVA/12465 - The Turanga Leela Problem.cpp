#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll a,b,c,d;
    while(cin >> a >> b)
    {
        if(a==0 && b==0) break;
        c=abs(a-b);
        d=sqrt(c);
        ll ans=0;
        for(ll i=1;i<=d;i++)
        {
            if(c%i==0) ans+=2;
        }
        if(d*d==c) ans--;
        cout << ans << endl;
    }
    return 0;
}
