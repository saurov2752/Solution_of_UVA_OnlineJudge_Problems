#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c,d;
    char s[100000];
    cin >> n;
    getchar();
    while(n--)
    {
        gets(s);
        c=0,d=0;
        int len=strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i]=='M')  c++;
            else if(s[i]=='F') d++;
        }
        if(c==d && c!=1) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;

    }
    return 0;
}
