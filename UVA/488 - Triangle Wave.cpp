#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,f;
    int i,j,k,c,z;
    while(scanf("%d",&n)==1)
    {
        for(z=0; z<n; z++)
        {
            scanf("%d %d",&a,&f);
            for(k=0; k<f; k++)
            {
                //c=1;
                for(i=0; i<a; i++)
                {
                    for(j=0; j<i+1; j++) printf("%d",i+1);
                    //c++;
                    printf("\n");
                }
                c=a-1;
                for(i=0; i<a-1; i++)
                {
                    for(j=0; j<a-1-i; j++) printf("%d",c);
                    c--;
                    printf("\n");
                }
                if(z!=n-1 || k!=f-1)
                    printf("\n");
            }
        }
    }
    return 0;
}

