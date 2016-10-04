#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    int x,sum=0,k;
    cin >> x;
    for(int i=0;i<x;i++)
    {
        cin >> a;
        if(a=="donate")
        {
            cin >> k;
            sum+=k;
        }
        if(a=="report")
        cout << sum << endl;

    }

    return 0;
}
