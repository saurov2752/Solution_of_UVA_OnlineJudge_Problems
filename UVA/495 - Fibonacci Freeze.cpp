#include <bits/stdc++.h>
#define ll long long;

using namespace std;
int fb[5010][5050];
void fibo()
{
    fb[0][0]=0;
    fb[1][0]=1;
    fb[2][0]=1;
    for(int i=3;i<5001;i++)
    {
        for(int j=0;j<5001;j++)
        {
            fb[i][j]+=fb[i-1][j]+fb[i-2][j];
            if(fb[i][j]>=10)
            {
                fb[i][j+1]+=fb[i][j]/10;
                fb[i][j]%=10;
            }
        }
    }
}
int main()
{
    fibo();
    int n,i;
    while(cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is ";
        for(i=5000;i>0;i--)
        {
            if(fb[n][i]!=0) break;
        }
        for(;i>=0;i--) cout << fb[n][i];
        cout << endl;

    }

    return 0;
}


//#include <bits/stdc++.h>
//#define ll long long
//using namespace std;
//ll ary[5050];
//int i;
//void fibo()
//{
//    ary[0]=0;
//    ary[1]=1;
//    for(i=2;i<=5000;i++) ary[i]=ary[i-1]+ary[i-2];
//}
//
//int main()
//{
//    fibo();
//    ll n;
//    while(cin >> n)
//    {
//        cout << "The Fibonacci number for " << n << " is " << ary[n] << endl;
//    }
//
//
//    return 0;
//}
