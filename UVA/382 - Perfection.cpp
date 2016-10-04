#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector <ll> v;
void divs(ll n)
{
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
            v.pb(i);
    }
}

int main()
{
    ll n;
    cout << "PERFECTION OUTPUT" << endl;
    while(cin >> n)
    {
        ll sum=0;
        if(n==0){ cout << "END OF OUTPUT" << endl;break;}
        else if(n<10) cout << "    " << n << "  " ;
        else if(n<100) cout << "   " << n << "  " ;
        else if(n<1000) cout << "  " << n << "  " ;
        else if(n<10000) cout << " " << n << "  " ;
        else cout << n << "  " ;
        divs(n);
        for(int i=0;i<v.size();i++) sum+=v[i];
        if(sum==n) cout << "PERFECT" << endl;
        else if(sum>n) cout << "ABUNDANT" << endl;
        else cout << "DEFICIENT" << endl;
        v.clear();
    }


    return 0;
}
