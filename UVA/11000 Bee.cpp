#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo[50];
ll total[1000];
void fibonachi()
{
    fibo[0]=1;
    fibo[1]=1;
    total[0]=1;
    total[1]=2;
    ll x=2;
    for(int i=2; i<=50; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        x+=+fibo[i];
        total[i]=x;
    }
}
int main()
{
    fibonachi();
    ll n;
    while(cin >> n)
    {
        if(n==-1) break;
        //cout << total[n];
        cout << total[n-1] << " " << total[n] << endl;
    }


    return 0;
}
