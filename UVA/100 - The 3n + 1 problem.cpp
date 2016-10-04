#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,i,j,a,k;
    while(cin >> n >> m)
    {
        a=0;
        cout << n << " " << m << " ";
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++)
        {
            c=1;
            j=i;
            while(j>1)
            {
                if(j%2==0) j=j/2;
                else
                    j=(j*3)+1;
                c++;
            }
           // cout << c << endl;
            if(c>a) a=c;
        }
        cout << a << endl;
    }
    return 0;
}
