#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int n,s,d,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&s,&d);
        if(s==0 && d==0) printf("%d %d\n",s,d);
        if(s<d) printf("impossible\n");
        if(s>d)
        {
            if(s%2==0 && d%2!=0) printf("impossible\n");
            if(s%2!=0 && d%2==0) printf("impossible\n");
            if(s%2==0 && d%2==0)
            {
                int a=s/2;
                int b=d/2;
                printf("%d %d\n",a+b,a-b);
            }
            if(s%2!=0 && d%2!=0)
            {
                int x=(s-1)/2;
                int y=(d+1)/2;
                printf("%d %d\n",x+y,(x-y)+1);
            }
        }
    }

    return 0;
}
