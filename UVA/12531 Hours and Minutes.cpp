#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n>180) cout << "N" << endl;
        else if(n%6==0) cout << "Y" << endl;
        else cout << "N" << endl;
    }


    return 0;
}
