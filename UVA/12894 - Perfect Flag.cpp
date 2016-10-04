#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x0,y0,x1,y1,cx,cy,r;
        cin >> x0 >> y0 >> x1 >> y1 >> cx >> cy >> r;
        int len=x1-x0;
        int wid=y1-y0;
        if((3*len==5*wid) && (len==5*r) && (9*len==20*(cx-x0)) && (wid==2*(cy-y0)))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
