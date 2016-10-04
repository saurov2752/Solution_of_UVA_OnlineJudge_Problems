#include <bits/stdc++.h>
#define ll long long
#define pf printf
using namespace std;

int main()
{
    int n;
    double u,v,t,s,a;
    double c=0;
    while(cin >> n)
    {
        if(n==0) break;
        else if(n==1)
        {
            cin >> u >> v >> t;
            s=0.5*t*(u+v);
            a=(v-u)/t;
            pf("Case %.0lf: %.3lf %.3lf\n",++c,s,a);
        }
        else if(n==2)
        {
            cin >> u >> v >> a;
            t=(v-u)/a;
            s=0.5*t*(u+v);
            pf("Case %.0lf: %.3lf %.3lf\n",++c,s,t);
        }
         else if(n==3)
        {
            cin >> u >> a >> s;
            v=(u*u)+(2*a*s);
            v=sqrt(v);
            t=(v-u)/a;
            pf("Case %.0lf: %.3lf %.3lf\n",++c,v,t);
        }
         else if(n==4)
        {
            cin >> v >> a >> s;
            u=(v*v)-(2*a*s);
            u=sqrt(u);
            t=(v-u)/a;
            pf("Case %.0lf: %.3lf %.3lf\n",++c,u,t);
        }
    }



    return 0;
}
