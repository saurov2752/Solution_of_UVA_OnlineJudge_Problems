#include <bits/stdc++.h>

using namespace std;
bool ar[9999999];
int prime[9999999];
int m=9999999;
void seive()
{
    for(int i=2; i<sqrt(m); i++)
    {
        if(ar[i]==0)
        {
            for(int j=i*i; j<m; j+=i) ar[j]=1;
        }
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<m; i+=2)
        if(ar[i]==0)
            prime[k++]=i;
}
//vector <int> res;
void fact(long long n)
{
    for(int i=0; prime[i]<=sqrt(n); i++)
    {
        while(n%prime[i]==0)
        {
            cout << "    " << prime[i] << endl;
            //res.push_back(prime[i]);
            n/=prime[i];
        }
    }
    if(n!=1) cout << "    " << n << endl; //res.push_back(n);
    cout << endl;
}

int main()
{
    seive();
    long long n;
    while(cin >> n)
    {
        if(n<0) break;
        fact(n);
//    for(int i=0;i<res.size();i++)
//        cout << res[i] << endl;
//    res.clear();
    }
    return 0;
}
