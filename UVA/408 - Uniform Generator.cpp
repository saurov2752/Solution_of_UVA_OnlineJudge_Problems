#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    ll s,m;
    while(cin >> s >> m)
    {
        if(s<10) cout << "         " << s ;
        else if(s<100) cout << "        " << s;
        else if(s<1000) cout << "       " << s;
        else if(s<10000) cout << "      " << s;
        else if(s<100000) cout << "     " << s;
        else if(s<1000000) cout << "    " << s;
        else if(s<10000000) cout << "   " << s;
        else if(s<100000000) cout << "  " << s;
        if(m<10) cout << "         " << m ;
        else if(m<100) cout << "        " << m;
        else if(m<1000) cout << "       " << m;
        else if(m<10000) cout << "      " << m;
        else if(m<100000) cout << "     " << m;
        else if(m<1000000) cout << "    " << m;
        else if(m<10000000) cout << "   " << m;
        else if(m<100000000) cout << "  " << m;
        int x=gcd(s,m);
        if(x==1) cout << "    Good Choice" << endl << endl;
        else cout << "    Bad Choice" << endl << endl;
    }


    return 0;
}
