#include <bits/stdc++.h>

using namespace std;
int kosto(int n)
{
    int ary[10];
    memset(ary,0,sizeof(ary));
    int f=0;
        while(n)
        {
            int x=n%10;
            if(ary[x]==1)
            {
                f=1;
                break;
            }
            else ary[x]=1;
            n/=10;
        }
        return f;
}

int main()
{
    int n,m;
    while(cin >> n >> m){
    int c=0;
    for(int i=n;i<=m;i++)
    {
        int x=kosto(i);
        if(x==1) c++;
    }
    cout << (m-n)-c+1 << endl;
    }

    return 0;
}
