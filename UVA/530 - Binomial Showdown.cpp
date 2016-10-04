#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    long long r;
    while(scanf("%d %d",&n,&k)==2)
    {
        if(n==0 && k==0) break;
        if(k>(n/2))
        {
            k=n-k;
        }
        r=1;
        for(int i=0; i<k; i++)
        {
            r=(r*(n-i))/(1+i);
        }
        printf("%lld\n",r);
    }
    return 0;
}
