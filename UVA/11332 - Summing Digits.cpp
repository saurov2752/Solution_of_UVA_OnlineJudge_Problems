#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int x,sum,c,ary[1010],k,a;
    while(scanf("%ld",&x)==1)
    {
        if(x==0) break;
        while(x>9)
        {
            sum=x;
            c=0;
            k=0;
            while(sum!=0)
            {
                a=sum%10;
                ary[k++]=a;
                sum=sum/10;
                c++;
            }
            x=0;
            for(int i=0; i<c; i++)
            {
                x+=ary[i];
            }
//        cout << x << endl;
        }
        cout << x << endl;
    }
    return 0;
}
