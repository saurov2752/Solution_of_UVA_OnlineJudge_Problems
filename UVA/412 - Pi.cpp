#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int test,ary[100];
    while(cin >> test)
    {
        if(!test) break;
        double c=0,d=0;
        for(int i=0;i<test;i++) cin >> ary[i];
        for(int i=0;i<test-1;i++)
        {
            for(int j=i+1;j<test;j++)
            {
                //cout << ary[i] << ary[j] << endl;
                d++;
                int x=gcd(ary[i],ary[j]);
                if(x==1)  c++;
            }
        }
        if(c==0) cout << "No estimate for this data set." << endl;
        else
        {
            double p=(d*6)/c;
            p=sqrt(p);
            if(p<=0) cout << "No estimate for this data set." << endl;
            else printf("%lf\n",p); //cout << p << endl;
        }
    }


    return 0;
}
