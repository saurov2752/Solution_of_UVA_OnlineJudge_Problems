#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,a,b,x,y;
    while(1)
    {
        cin >> test;
        if(test==0) break;
        cin >> a >> b;
        while(test--)
        {
            cin >> x >> y;
            if(a<x && b<y) cout << "NE" << endl;
            else if(a>x && b<y) cout << "NO" << endl;
            else if(a>x && b>y) cout << "SO" << endl;
            else if(a<x && b>y) cout << "SE" << endl;
            else cout << "divisa" << endl;
        }
    }

    return 0;
}
