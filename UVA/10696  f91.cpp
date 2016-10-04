#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    ll n;
    while(cin >> n)
    {
        if(n==0) break;
        cout << "f91(" << n << ") = ";
        if(n >= 101) cout << n-10 << endl;
        else
        {
            ll m=2;
            while(m)
            {
                if(n>=101)
                {
                    n-=10;
                    m--;
                }
                else
                {
                    n+=11;
                    m++;
                }
            }
            cout << n << endl;
        }
    }


    return 0;
}
