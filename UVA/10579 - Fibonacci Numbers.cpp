#include <bits/stdc++.h>

using namespace std;
int fb[5050][5050];
void fibo()
{
    fb[0][0]=0;
    fb[1][0]=1;
    fb[2][0]=1;
    for(int i=3;i<=5000;i++)
    {
        for(int j=0;j<=5000;j++)
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
        for(i=5000;i>0;i--)
            if(fb[n][i]) break;
        for(;i>=0;i--) cout << fb[n][i];
        cout << endl;
    }

    return 0;
}
