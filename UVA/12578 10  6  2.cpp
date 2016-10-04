#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int len;
        cin >> len;
        double wid=(double)(len * 3)/5;
        double r=(double)len/5;
        double areaC=(acos(-1)*r*r);
        double areaR=((double)len*wid)-areaC;
        printf("%0.2lf %0.2lf\n",areaC,areaR);
    }
    return 0;
}
