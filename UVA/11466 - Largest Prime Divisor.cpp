#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
bool ary[10001000];
ll prime[1000000];
ll m=10001000;
void siv()
{
    int sqr=sqrt(m);
    for(int i=2; i<=sqr; i++)
    {
        if(ary[i]==0)
        {
            for(int j=i*i; j<=m; j+=i) ary[j]=1;
        }
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<=m; i+=2)
    {
        if(ary[i]==0) prime[k++]=i;
    }
}
//vector < int > v;
ll fact(ll n)
{
    ll cut=0,v;
    for(ll i=0; prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0) cut++;
        while(n%prime[i]==0)
        {
            v=prime[i];
            n/=prime[i];
        }
    }
    if(n!=1)
    {
        v=n;
        cut++;
    }
    if(cut==1) return -1;
    else return v;
}
int main()
{
    siv();
    ll n;
    while(cin >> n)
    {
        //cout << n << endl;
        if(n<0) n*=-1;
        if(n==0) break;
        if(n==1)
        {
            cout << "-1" << endl;
            continue;
        }
        ll x=fact(n);
        cout << x << endl;
        //int c=v.size();
//    for(int i=0; i<v.size(); i++)
//    {
//        cout << v[i] << endl;
//    }
//        if(c==1) cout << "-1" << endl;
//        else cout << v[c-1] << endl;
//        v.clear();
    }
    return 0;
}
