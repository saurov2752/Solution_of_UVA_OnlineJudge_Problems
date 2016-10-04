#include <bits/stdc++.h>

using namespace std;
bool ary[40000];
int prime[40000];
int m=40000;
void siv()
{
    for(int i=2; i<sqrt(m); i++)
        if(ary[i]==0)
            for(int j=i*i; j<m; j+=i)
                ary[j]=1;
    int k=0;
    prime[k++]=2;
    for(int i=3; i<m; i+=2)
        if(ary[i]==0)
            prime[k++]=i;
}

int main()
{
    siv();
    int n;
    while(cin >> n)
    {
        int c=0;
        if(n==0) break;
        for(int i=0; ; i++)
        {
            if(prime[i]>n/2) break;
            int x=n-prime[i];
            if(ary[x]==0)
            {
                //cout << prime[i] << " " << x << endl;
                c++;
            }
        }
        cout << c << endl;
    }


    return 0;
}
