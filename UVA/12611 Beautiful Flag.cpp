#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        int r;
        cin >> r;
        cout << "Case " << i+1 << ":" << endl;
        int x=(25*r)/100;
        //cout << x ;
        cout << "-" << ((r*5)/2)-x << " " << (r*3)/2 << endl;
        cout << ((r*5)/2)+x << " " << (r*3)/2 << endl;
        cout << ((r*5)/2)+x << " -" << (r*3)/2 << endl;
        cout << "-" << ((r*5)/2)-x << " -" << (r*3)/2 << endl;
    }


    return 0;
}
