#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",a);
    }
    return 0;
}
