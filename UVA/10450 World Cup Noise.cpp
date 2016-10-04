#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fb[1000];
void fibo()
{
    fb[0]=1;
    fb[1]=2;
    fb[2]=3;
    for(int i=3;i<60;i++) fb[i]=fb[i-1]+fb[i-2];
}
int main()
{
    fibo();
    int test;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin >> n;
        cout << "Scenario #" << i+1 << ":" << endl;
        cout << fb[n] << endl;
        cout << endl;
    }

    return 0;
}
