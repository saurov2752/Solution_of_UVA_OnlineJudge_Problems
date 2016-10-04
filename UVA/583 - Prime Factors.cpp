#include <bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;
bool ary[9999999];
int prime[9999999];
ll n=9999999;
void siv()
{
    for(int i=2; i<=sqrt(n); i++)
        if(ary[i]==0)
            for(int j=i*i; j<=n; j+=i) ary[j]=1;
    ll k=0;
    prime[k++]=2;
    for(int i=3; i<=n; i+=2)
        if(ary[i]==0) prime[k++]=i;
}
vector <ll> res;
void fact(ll n)
{
    for(int i=0; prime[i]<=sqrt(n); i++)
    {
        while(n%prime[i]==0)
        {
            res.pb(prime[i]);
            n/=prime[i];
        }
    }
    if(n!=1) res.pb(n);
}

int main()
{
    siv();
    ll n;
    while(cin >> n)
    {
        if(n==0) break;
        cout << n << " = ";
        if(n<0)
        {
            n=-1*n;
            cout << "-1 x ";
        }
        fact(n);
        for(int i=0; i<res.size(); i++)
        {
            if(i==0) cout << res[i];
            else cout << " x " << res[i];
        }
        cout << endl;
        res.clear();
    }


    return 0;
}
