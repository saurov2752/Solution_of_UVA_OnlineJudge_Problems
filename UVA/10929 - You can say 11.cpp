#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10100];
    while(1)
    {
        int s=0;
        cin >> str;
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            s=s*10+str[i]-'0';
            s=s%11;
        }
            if(s==0 && len==1) break;
        else if(s==0) cout << str << " is a multiple of 11." << endl;
        else cout << str << " is not a multiple of 11." << endl;
    }
    return 0;
}
