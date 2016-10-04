#include <bits/stdc++.h>

using namespace std;
int fib[4010][4010];
void fb()
{
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    for(int i=3; i<4001; i++)
    {
        for(int j=0; j<4001; j++)
        {
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=10)
            {
                fib[i][j+1]+=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}
int main()
{
    fb();
    int n,i;
    while(cin >> n)
    {
        if(n==0) break;
        else n=n*2;
        for(i=4000; i>0; i--)
        {
            if(fib[n][i]!=0) break;
        }
        for(; i>=0; i--) cout << fib[n][i];
        cout << endl;
    }


    return 0;
}
