#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,e;
    while(cin >> n){
    int y=1000000;
    int ary[n];
    for(int i=0;i<n;i++) cin >> ary[i];
    int mo;
    cin >> mo;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(ary[i]+ary[j]==mo)
            {
                int x=abs(ary[i]-ary[j]);
                if(x<y) {y=x;
                d=ary[i]; e=ary[j];}
            }
        }
    }
    if(d>e)
    cout << "Peter should buy books whose prices are " << e << " and " << d << "." << endl << endl;
    else if(d<e) cout << "Peter should buy books whose prices are " << d << " and " << e << "." << endl << endl;
    else cout << "Peter should buy books whose prices are " << e << " and " << d << "." << endl << endl;

    }
    return 0;
}
