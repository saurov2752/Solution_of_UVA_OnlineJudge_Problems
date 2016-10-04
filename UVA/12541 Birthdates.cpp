#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d=0,e=111111111;
    string str,ac;
    cin >> n;
    while(n--)
    {
        string ss;
        int s,ary[100000];
        cin >> ss;
        for(int i=0;i<3;i++)
        {
            cin >> ary[i];
        }
        s=0;
        for(int i=2;i>=0;i--)
        {
            s=(s*100)+ary[i];
        }
        if(d<s)
        {
            d=s;
            str=ss;
        }
        if(e>s)
        {
            e=s;
            ac=ss;
        }
    }
    cout << str << endl;
    cout << ac << endl;




    return 0;
}
