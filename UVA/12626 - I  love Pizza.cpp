#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        char str[1000];
        cin >> str;
        int len=strlen(str);
        int I=0,a=0,m=0,r=0,t=0,g=0,c=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='A') a++;
            else if(str[i]=='M') m++;
            else if(str[i]=='R') r++;
            else if(str[i]=='G') g++;
            else if(str[i]=='I') I++;
            else if(str[i]=='T') t++;
        }
        if(m<1 || a<3 || r<2 || g<1 || I<1 || t<1) {cout << "0" << endl; continue;}
        else
        {
            while(m>=1 && a>=3 && r>=2 && g>=1 && I>=1 && t>=1)
            {
                c++;
                m--; a-=3; r-=2; g--; I--; t--;
            }
        }
        cout << c << endl;
    }



    return 0;
}
