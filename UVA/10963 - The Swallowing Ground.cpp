#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,c,d,x,i;
    cin >> t;
    while(t--)
    {
        bool flag=false;
        cin >> n;
        cin >> c >> d;
        x=c-d;
        for(i=0; i<n-1; i++)
        {
            cin >> c >> d;
            if(x!=c-d) flag=true;
        }
        if(flag==true) cout << "no" << endl;
        else cout << "yes" << endl;
        if(t!=0)cout << endl;
    }

    return 0;
}
