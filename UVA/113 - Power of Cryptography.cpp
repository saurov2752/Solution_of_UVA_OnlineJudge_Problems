#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,p;
    while(cin >> n >> p)
    {
        double x=pow(p,1/n);
        printf("%0.0lf\n",x);
    }


    return 0;
}
