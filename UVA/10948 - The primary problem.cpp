#include <bits/stdc++.h>

using namespace std;
bool ar[9999999];
//int prime[9999999];
int n=9999999;
//int k=0;
void siv()
{
    ar[0]=1;
    ar[1]=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(ar[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
                ar[j]=1;
        }
    }
//    prime[k++]=2;
//    for(int i=3; i<=n; i+=2)
//        prime[k++]=i;
}

int main()
{
    siv();
    int m,z,x;
    while(cin >> m)
    {
        int f=0;
        if(m==0) break;
        cout << m << ":" << endl;
        z=m;
        while(m--)
        {
            x=z-m;
            if(ar[x]==0 && ar[m]==0){f=1; break;}
        }
        if(f==0) cout << "NO WAY!" << endl;
        else
        cout << x << "+" << m << endl;
    }


    return 0;
}
