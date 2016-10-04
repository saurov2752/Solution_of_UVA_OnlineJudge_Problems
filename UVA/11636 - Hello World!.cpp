#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,z,c=1,d,b;
    while(cin >> x)
    {
        z=1,d=0,b=1;
        if(x<0) break;
        else if(x==0) cout << "Case " << c++ << ": " << 0 << endl;
        else if(x==1) cout << "Case " << c++ << ": " << 0 << endl;
        else
        {
            while(z<x)
            {
                z+=b;
                b=z;
                d++;
            }
            cout << "Case " << c++ << ": " << d << endl;
        }
    }
    return 0;
}
