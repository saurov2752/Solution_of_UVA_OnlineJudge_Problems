#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll test,lr,ur,div,num,big;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        num=0,big=0;
        cin >> lr >> ur;
        for(int j=lr; j<=ur; j++)
        {
            div=0;
            int p=sqrt(j);
            for(int k=1; k<=p; k++)
            {
                if(j%k==0)
                {
                    div++;
                    if(j/k!=k) div++;
                }
            }
            if(big<div)
            {
                big=div;
                num=j;
            }
        }
        cout << "Between " << lr << " and " << ur << ", " << num << " has a maximum of " << big << " divisors." << endl;
    }


    return 0;
}
