#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        if(n==0) break;
        long long x=sqrt(n);
        if(x*x==n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
