#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int c=1;
    while(cin >> a)
    {
        if(a=="*") break;
        if(a=="Hajj") printf("Case %d: Hajj-e-Akbar\n",c++);
        else if(a=="Umrah") printf("Case %d: Hajj-e-Asghar\n",c++);

    }



    return 0;
}
