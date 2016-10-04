#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        if(n<0) break;
        else
        {
            n=((n*(n+1))/2)+1;
        }
        cout << n << endl;
    }


    return 0;
}
