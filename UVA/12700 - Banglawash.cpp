#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,i;
    cin >> test;
    for(i=0;i<test;i++)
    {
        int n;
        cin >> n;
        char str[n];
        getchar();
        cin >> str;
        int len=strlen(str);
        int b=0,w=0,a=0,t=0;
        for(int j=0;j<len;j++)
        {
            if(str[j]=='B')      b++;
            else if(str[j]=='W') w++;
            else if(str[j]=='A') a++;
            else if(str[j]=='T') t++;
        }
        cout << "Case " << i+1 << ": ";
        if(a==len) cout << "ABANDONED";
        else if(w==0 && t==0) cout << "BANGLAWASH";
        else if(b==0 && t==0) cout << "WHITEWASH";
        else if(b==w) cout << "DRAW " << b << " " << t;
        else if(b>w) cout << "BANGLADESH " << b << " " << "-" << " " << w;
        else if(w>b) cout << "WWW " << w << " " << "-" << " " << b;
        cout << endl;
    }



    return 0;
}
