#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    char str[100000];
    int i;
    while(gets(str))
    {
        int len=strlen(str);
        if(str[0]=='*') break;
        int x=str[0];
        for(i=0;i<len-1;i++)
        {
            if(str[i]==' ' && str[i+1]!=' ')
            {
                int y=str[i+1];
                if(x!=y+32 && x!=y-32 && x!=y)
                {
                    cout << "N" << endl;
                    break;
                }
            }
        }
        if(i==len-1) cout << "Y" << endl;
    }

    return 0;
}
