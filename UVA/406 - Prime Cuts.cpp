#include <bits/stdc++.h>
#define pb push_back
using namespace std;
bool ary[10001000];
int prime[1000100];
int k;
//int m=10001000;
void siv(int m)
{
    int sqr=sqrt(m);
    for(int i=2; i<=sqr; i++)
    {
        if(ary[i]==0)
        {
            for(int j=i*i; j<=m; j+=i) ary[j]=1;
        }
    }
    k=0;
    prime[k++]=1;
    prime[k++]=2;
    for(int i=3; i<=m; i+=2)
        if(ary[i]==0) prime[k++]=i;
}
int main()
{
    int n,c,jabe,mid;
    while(cin >> n >> c)
    {
        cout << n << " " << c << ":";
        if(n==1)
        {
            cout << " 1" << endl;
            cout << endl;
            continue;
        }
        siv(n);
        if(k%2==0)
        {
            mid=(k/2)-c;
            jabe=c*2;
            if(jabe>k)
            {
                jabe=k;
                mid=0;
            }
            for(int i=0;i<jabe;i++) cout << " " << prime[mid++] ;
        }
        else if(k%2!=0)
        {
            mid=((k/2)-c)+1;
            jabe=(c*2)-1;
            if(jabe>k)
            {
                jabe=k;
                mid=0;
            }
            for(int i=0;i<jabe;i++) cout << " " << prime[mid++] ;
              }
        cout << endl;
        cout << endl;
    }
    return 0;
}
