#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q,a,b,r;
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b) printf("%d %d\n",a,b);
        if(a<b)
        {
            int n1=a;
            int n2=b;
            r=b%a;
            while(r!=0)
            {
                n2=n1;
                n1=r;
                r=n2%n1;
            }
            int l=(a*b)/n1;
            if(n1==a && l==b) printf("%d %d\n",n1,l);
            else printf("-1\n");
        }
        if(a>b) printf("-1\n");
    }

    return 0;
}
