#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k=0,ar[10010],f;
    while(cin >> n)
    {
        ar[k]=n;
        sort(ar,ar+k+1);
//        for(int i=1; i<=k; i++) cout << ar[i] << " ";
        if(k%2==0)
            cout << ar[k/2] << endl;
        else
        {
            f=ar[k/2]+ar[k/2+1];
            cout  << f/2 << endl;
        }
        k++;
        }
        return 0;
    }
