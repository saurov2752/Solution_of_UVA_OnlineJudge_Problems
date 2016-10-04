#include <bits/stdc++.h>

using namespace std;
int ary[1000000];

int main()
{
    int br[100000],k=0;
    br[k++]=2;
    for(int i=3; i<sqrt(1000000); i+=2)
    {
       if(ary[i]==0)
        {
            for(int j=i*i; j<1000000; j+=i)
                ary[j]=1;
        }
    }
    for(int i=3; i<1000000; i+=2)
    {
        if(ary[i]==0)
        {
            //printf("%d ",i);
            br[k++]=i;
        }
    }
 //   for(int i=0;i<k;i++) cout << br[i] << " ";
    int n,m,f=0;
    while(cin >> n)
    {
        if(n==0) break;
        for(int i=0;i<k;i++)
        {
            m=n-br[i];
            if(ary[m]==0 && m%2!=0){
                    f=1;
            printf("%d = %d + %d\n",n,br[i],m);
            break;}
        }
        if(n==0) printf("Goldbach's conjecture is wrong.\n");

    }

    return 0;
}
