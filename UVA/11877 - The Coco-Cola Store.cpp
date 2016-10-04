#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    while(cin >> test)
    {
        if(test==0) break;
        int x=0,y;
        while(test>2)
        {
            x+=test/3;
            test=test/3+test%3;
        }
        if(test==1) cout << x << endl;
        else cout << ++x << endl;
    }



    return 0;
}
