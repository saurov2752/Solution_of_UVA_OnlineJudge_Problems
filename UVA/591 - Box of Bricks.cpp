#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    while(cin >> n)
    {
        if(n==0) break;
        int sum=0,ans=0;
        int ary[n];
        for(int i=0;i<n;i++)
        {
            cin >> ary[i];
            sum+=ary[i];
        }
        int x=sum/n;
        for(int i=0;i<n;i++)
        {
            if(ary[i]<x)
            {
                ans+=x-ary[i];
            }
        }
        cout << "Set #" << ++c << endl;
        cout << "The minimum number of moves is " << ans << "." << endl << endl;
    }


    return 0;
}
