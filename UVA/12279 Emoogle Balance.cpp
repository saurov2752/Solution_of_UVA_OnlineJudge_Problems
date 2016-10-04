#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,z=1;
    while(cin >> n)
    {
        if(n==0) break;
        int c=0,d=0,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==0) c++;
            else d++;
        }
        printf("Case %d: %d\n",z++,d-c);
    }

    return 0;
}
