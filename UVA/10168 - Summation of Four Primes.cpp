#include <bits/stdc++.h>

using namespace std;
bool ar[9999999];
int prime[9999999];
int m=9999999;
void seive()
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
int main()
{
    seive();
    int n;
    while(cin >> n)
    {
        if(n<8) {cout << "Impossible." << endl; continue;}
        else
        {
            if(n%2==0)
            {
                cout << "2 2 " ;
                n-=4;
            }
            else if(n%2!=0)
            {
                cout << "2 3 ";
                n-=5;
            }
            for(int i=0;i<=(n/2);i++)
            {
                int x=n-prime[i];
                if(ar[x]==0)
                {
                    cout << prime[i] << " " << x << endl;
                    break;
                }
            }
        }
    }


    return 0;
}
