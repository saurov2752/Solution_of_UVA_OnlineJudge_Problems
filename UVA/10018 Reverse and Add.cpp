#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll test,c,sum;
    cin >> test;
    while(test--)
    {
        ll n;
        c=0;
        cin >> n;
        while(1)
        {
            ll a=n;
            sum=0;
            while(n!=0)
            {
                sum=sum*10+n%10;
                n/=10;
            }
            //cout << sum << endl;
            if(sum==a)
                break;
            else
            {
                n=sum+a;
                c++;
            }
        }
        cout << c << " " << sum << endl;
    }



    return 0;
}
