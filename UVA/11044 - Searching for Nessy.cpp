#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,a,b;
    cin>> test;
    while(test--)
    {
        cin >> a >> b;
        a=a/3;
        b=b/3;
        cout << a*b << endl;
    }

    return 0;
}
