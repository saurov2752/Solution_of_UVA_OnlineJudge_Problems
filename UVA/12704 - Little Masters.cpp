#include <bits/stdc++.h>
#define pf printf
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        double x,y,r;
        cin >> x >> y >> r ;
        double bf=sqrt((x*x)+(y*y));
        pf("%.2lf %.2lf\n",(r-bf),(r+bf));
    }


    return 0;
}
