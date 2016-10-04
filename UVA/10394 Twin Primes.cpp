#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
bool ary[20000000];
ll prime[20000000];
ll n=20000000;
ll ar[200000];
vector <ll> v;
void siv()
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(ary[i]==0)
        {
            for(int j=i*i; j<=n; j+=i) ary[j]=1;
        }
    }
    ll k=0;
    v.pb(2);
    for(int i=3; i<=n; i+=2)
    {
        if(ary[i]==0) v.pb(i);
    }
    ll c=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i+1]-v[i]==2) ar[c++]=v[i];
    }
}

int main()
{
    siv();
    ll n;
    while(cin >> n)
    {
        cout << "(" << ar[n-1] << ", " << ar[n-1]+2 << ")" << endl;
    }

    return 0;
}
