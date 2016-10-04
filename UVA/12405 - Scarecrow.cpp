#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll test,d=0;
    cin >> test;
    for(ll i=0;i<test;i++)
    {
        char ary[1000000];
        ll n,c=0;
        cin >> n >> ary;
        for(ll j=0;j<n;)
        {
            if(ary[j]=='#') j++;
            else
            {
                c++;
                j+=3;
            }
        }
        cout << "Case " << ++d << ": ";
        cout << c << endl;
    }


    return 0;
}
