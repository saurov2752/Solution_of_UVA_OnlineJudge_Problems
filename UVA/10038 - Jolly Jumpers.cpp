#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i;
    while(cin >> n)
    {
        bool f=0;
        ll ary[100100],bra[100100];
        for(i=0; i<n; i++) cin >> ary[i];
        for(i=0; i<n-1; i++)
            bra[i]=abs(ary[i]-ary[i+1]);
        sort(bra,bra+i);
        for(i=0; i<n-1; i++)
        {
            if(bra[i]==bra[i+1])
            {
                cout << "Not jolly" << endl;
                f=1;
                break;
            }
        }
        if(f==0) cout << "Jolly" << endl;
    }

    return 0;
}
