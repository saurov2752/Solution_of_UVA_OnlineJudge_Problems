#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    double c,f,t;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        cin >> c >> f;
        t=((5.0/9.0)*f)+c;
        //cout << "Case " << i+1 << ": "   << t << endl;
        printf("Case %d: %.2lf\n",i+1,t);
    }


    return 0;
}
