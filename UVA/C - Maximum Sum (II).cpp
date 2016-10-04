#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,k,ary[10005];
    while(cin >> a)
    {
        k=0;
        if(!a) break;
        for(i=0; i<a; i++)
        {
            cin >> b;
            if(b) ary[k++]=b;
        }
        if(!k) cout << "0";
        else
        {
            for(i=0;i<k;i++)
            {
                if(i) cout << " ";
                cout << ary[i];
            }
        }
        cout << endl;
    }

    return 0;
}
