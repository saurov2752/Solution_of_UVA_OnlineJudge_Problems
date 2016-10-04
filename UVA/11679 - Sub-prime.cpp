#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,ary[30];
    while(cin >> n >> b)
    {
        if(!n && !b) break;
        for(int i=1;i<=n;i++) cin >> ary[i];
        for(int j=1;j<=b;j++)
        {
            int d,c,m;
            cin >> d >> c >> m;
            ary[c]=ary[c]+m;
            ary[d]=ary[d]-m;
            //cout << ary[d-1] << endl;
        }
        int i;
        for(i=1;i<=n;i++)
        {
            if(ary[i]<0)
            {
                cout << "N" << endl;
                break;
            }
        }
        if(i==n+1) cout << "S" << endl;
    }



    return 0;
}
