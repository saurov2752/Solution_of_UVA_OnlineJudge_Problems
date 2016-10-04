#include <bits/stdc++.h>
#define ll long long
using namespace std;

    ll fib[55];
void fibonacchi()
{
    fib[1] = 1; fib[2] = 2;
    for(int i=3;i<=50;i++)  fib[i] = fib[i-1] + fib[i-2];
}

int main()
{
    //freopen("input.txt","r",stdin);
    fibonacchi();
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        cout << fib[n] << endl;
    }


    return 0;
}
