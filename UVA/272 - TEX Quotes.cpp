#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int c=0;
    while(getline(cin,a))
    {
        int len;
        len=a.size();
        for(int i=0;i<len;i++)
        {
                if(a[i]=='"')
                {
                    c++;
                    if(a[i]=='"' && c%2!=0) cout << "``";
                    else if(a[i]=='"' && c%2==0) cout << "''";
                }
                else cout << a[i];
        }
        cout<<endl;
    }


    return 0;
}
