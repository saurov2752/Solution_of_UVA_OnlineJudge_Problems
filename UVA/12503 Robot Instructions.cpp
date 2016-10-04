#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,ary[100],sum,a;
    string s,d;
    cin >> n;
    while(n--)
    {
        sum=0;
        cin >> x;
        for(int i=0;i<x;i++)
        {
            cin >> s;
            if(s=="LEFT")
            {
                sum--;
                ary[i]=-1;
            }
            else if(s=="RIGHT")
            {
                sum++;
                ary[i]=1;
            }
            else
            {
                cin >> d;
                cin >> a;
                //cout << ary[a-1] << endl;
                sum=sum+ary[a-1];
                ary[i]=ary[a-1];
            }
        }
        cout << sum << endl;
    }

    return 0;
}
