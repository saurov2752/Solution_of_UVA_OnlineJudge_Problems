#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
//        long long x=1%10;
//        cout << x << endl;
        long long ans=1,c=1;
        if(n==0){cout << "0" << endl; continue;}
        if(ans%n==0)
        {
            cout << c << endl;
            continue;
        }
        while(ans%n!=0)
        {
            if(ans%n!=0)
            {
                ans=(ans%n)*10+1;
                //cout << ans << endl;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
