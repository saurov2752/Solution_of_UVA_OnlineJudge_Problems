#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h,d,n,k;
    while(cin >> h >> d >> n >> k)
    {
        if(h==0) break;
        double x=0,c=0,y=0,day=0;
        double kl=(k/100)*d;
        int f=0;
        y=d;
        while(1)
        {
            c++;
            if(d>0)
                x+=d;
            d=d-kl;
            if(x>h) break;
            x-=n;
            if(x<0)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout << "failure on day " << c << endl;
        else cout << "success on day " << c << endl;
    }
    return 0;
}
