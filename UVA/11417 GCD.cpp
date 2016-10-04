#include <bits/stdc++.h>
#define pf printf

//    int a,b;
//    cin >> a >> b;
//    int c,r=100000000;
//    if(a>b)
//    {
//        c=a;
//        a=b;
//        b=c;
//    }
//        while(r)
//        {
//            r=b%a;
//            b=a;
//            a=r;
//
//        }
//        cout << b;


using namespace std;

int gcd(int a,int b)
{
    int c,r=100000000;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    while(r)
    {
        r=b%a;
        b=a;
        a=r;

    }
    return b;
}

int main()
{
    int n;
    while(cin >> n)
    {
        int g;
        if(n==0) break;
        else
        {
            g=0;
            for(int i=1; i<n; i++)
            {
                for(int j=i+1; j<=n; j++)
                {
                    g+=gcd(i,j);
                }
            }
        }
        cout << g << endl;
    }

    return 0;
}
