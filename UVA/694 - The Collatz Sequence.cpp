#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,lim,b=0;
    while(cin >> n >> lim)
    {
        b++;
        if(n==-1 && lim==-1) break;
        int c=0,f=0;
        cout << "Case " << b << ": A = " << n << ", limit = " << lim << ", number of terms = " ;
        while(n!=1)
        {
            c++;
            if(n%2!=0)
                n=(n*3)+1;
            else if(n%2==0)
                n=n/2;
                if(n>lim) {f=1; break;}
        }
        if(f==1) cout << c << endl;
        else cout << c+1 << endl;
    }


    return 0;
}
