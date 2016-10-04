#include <bits/stdc++.h>

using namespace std;
bool ar[9999999];
int prime[9999999];
int m=9999999;
int bb;
void siv()
{
    for(int i=2;i<sqrt(m);i++)
    {
        if(ar[i]==0)
        {
            for(int j=i*i;j<m;j+=i) ar[j]=1;
        }
    }
    int k=0;
    prime[k++]=2;
    for(int i=3;i<m;i+=2)
        if(ar[i]==0)
        prime[k++]=i;
}
//vector <int> res;
void fact(int n)
{
    bb=0;
    for(int i=0;prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0) bb++;
        while(n%prime[i]==0)
        {

            //res.push_back(prime[i]);
            n/=prime[i];
        }
    }
    if(n!=1) bb++;//res.push_back(n);
}
int main()
{
    siv();
    int n;
    while(cin >> n)
    {
        if(n==0) break;
        cout << n << " : ";
        fact(n);
        cout << bb << endl;
    }

     return 0;
}
