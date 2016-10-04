#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> str;
        int len=str.size();
        if(str=="1" || str=="4" || str=="78") cout << "+" << endl;
        else
        {
                if(str[len-2]=='3' && str[len-1]=='5')
                {
                    cout << "-" << endl;
                }
                else if(str[0]=='9' && str[len-1]=='4')
                {
                    cout << "*" << endl;
                }
                else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
                {
                    cout << "?" << endl;
                }
        }
    }


    return 0;
}
