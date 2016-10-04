#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,ary[1005],i;
    cin >> test;
    while(test--)
    {
        cin >> n;
        for(int i=0;i<n;i++) cin >> ary[i];
        sort(ary,ary+n);
        cout << 2*(ary[n-1]-ary[0]) << endl;
    }

    return 0;
}
