#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int x=a*a+b*b;
        if(x>=c*c) cout << "OK" << endl;
        else cout << "Wrong!!" << endl;
    }
    return 0;
}
