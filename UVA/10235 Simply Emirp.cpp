#include <bits/stdc++.h>

using namespace std;

bool ary[1000010];
int prime[80000];   //78501
int m=1000010;
void siv()
{
    for(int i=2; i<=sqrt(m); i++)
    {
        if(ary[i]==0)
        {
            for(int j=i*i; j<=m; j+=i) ary[j]=1;
        }
    }
    int k=0;
    prime[k++]=2;
    for(int i=3; i<=m; i+=2)
    {
        if(ary[i]==0) prime[k++]=i;
    }
}
int main()
{
    siv();
    int n;
    while(cin >> n)
    {
        if(n==1)
        {
            cout << n << " is not prime." << endl;
            continue;
        }
        //cout << ary[n] << endl;
        if(ary[n]==1) cout << n << " is not prime." << endl;
        else
        {
            int sum=0,ans=n;
            while(n)
            {
                int x=n%10;
                sum=sum*10+x;
                n/=10;
            }
            //cout << sum;
            if(sum==ans) cout << ans << " is prime." << endl;
            else if(ary[sum]==0) cout << ans << " is emirp." << endl;
            else cout << ans << " is prime." << endl;
        }
    }
    return 0;
}
