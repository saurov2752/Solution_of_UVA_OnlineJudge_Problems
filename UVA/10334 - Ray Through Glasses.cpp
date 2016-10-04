#include <bits/stdc++.h>
#define ll long long
#define lim 5001
#define len 1050
using namespace std;
int fibo[lim][len];
void fibonacchi()
{
    int i,j;
    fibo[0][0]=0;
    fibo[1][0]=1;
    fibo[2][0]=1;
    for(i=3; i<lim; i++)
    {
        for(j=0; j<len; j++)
        {
            fibo[i][j]+=fibo[i-2][j]+fibo[i-1][j];
            if(fibo[i][j]>=10)
            {
                fibo[i][j+1]+=fibo[i][j]/10;
                fibo[i][j]%=10;
            }
        }
    }
}

int main()
{

    fibonacchi();
    int n,i;
    while(scanf("%d",&n)==1)
    {
        n+=2;
        //cout << fibo[n][0] << endl;
        for(i=len-1; i>0; i--)
        {
            if(fibo[n][i]!=0)break;
        }
        for(; i>=0; i--)printf("%d",fibo[n][i]);
        printf("\n");
    }

    return 0;
}
//#include <bits/stdc++.h>
//#define ll long long
//
//using namespace std;
//
//ll fib[1010];
//void fibonacchi()
//{
//    fib[0] = 1; fib[1] = 2;
//    for(int i=2;i<=1000;i++)  fib[i] = fib[i-1] + fib[i-2];
//}
//
//int main()
//{
//    fibonacchi();
//    int n;
//    while(cin >> n)
//    {
//        cout << fib[n] << endl;
//    }
//
//
//
//
//
//    return 0;
//}



