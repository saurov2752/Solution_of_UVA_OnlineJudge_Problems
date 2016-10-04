#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll power(ll n,ll v)
{
    ll ans=1;
    for(int i=0; i<v; i++) ans*=n;
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        char n[1000];
        cin >> n;
        ll df=atoi(n);
        //cout << n;
        ll len=strlen(n);
        ll ds=0;
        for(int i=0; i<len; i++)
        {
            int x=n[i]-'0';
            //cout << x;
            ds+=power(x,len);
            //cout << ds << endl;
        }
        if(df==ds) cout << "Armstrong" << endl;
        else cout << "Not Armstrong" << endl;
    }
    return 0;
}
