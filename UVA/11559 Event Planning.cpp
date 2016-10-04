#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,h,w,c,x,d,cost,ans;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4)
    {
        ans=99999999;
        c=0;d=0;
        for(int i=0;i<h;i++)
        {
            cin >> cost;
            if(n*cost<=b) c=1;
            for(int j=0;j<w;j++)
            {
                cin >> x;
                if(x>=n)
                {
                    if(ans>n*cost)
                    {
                        ans=n*cost;
                        d=1;
                    }
                }
            }
        }
        if(c==1 && d==1) cout << ans << endl;
        else cout << "stay home" << endl;
    }
    return 0;
}
