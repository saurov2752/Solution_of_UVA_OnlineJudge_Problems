#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,a,b,c,sum,x;
    cin >> n;
    while(n--)
    {
        x=0;
        cin >> t;
        for(int i=0;i<t;i++)
        {
            cin >> a >> b >> c;
            sum=a*c;
            x+=sum;
        }
        cout << x << endl;
    }


    return 0;
}
