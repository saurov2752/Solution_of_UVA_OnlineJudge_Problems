#include <bits/stdc++.h>

using namespace std;

int ss(char n[100000],int len)
{
    int i,j,f=0;
    for(i=0,j=len-1; i<len; i++,j--)
    {
        if(n[i]!=n[j])
        {
            f=1;
            break;
        }

    }
    if(f==1) return f;
    else return f;
}
int prime(int x)
{
    int i,g=1;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            g=0;
            break;
        }
    }
    if(g==0) return g;
    else return g;
}


int main()
{
    char str[1000000];
    while(cin >> str)
    {
        int len=strlen(str);
        int x=atoi(str);
        //cout << ss(str,len);
        if((ss(str,len)==0) && (prime(x)==1) && x!=1)
        {
            cout << 2*x << endl;
            return 0;
        }
        else
        {
            cout << 2*x << endl;
        }
    }
    return 0;
}
