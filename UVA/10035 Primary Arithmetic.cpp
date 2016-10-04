#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[20],ss[20];
    while(cin >> str >> ss)
    {
        if(str[0]=='0' && ss[0]=='0') break;
        int l1=strlen(str);
        int l2=strlen(ss);
        //int w=max(l1,l2);
        int l11=l1;
        int l22=l2;
        //cout << "w" << w << endl;
        int c=0,d=0,x,y,z;
        if(l1>=l2)
        {
            for(int i=l11-1,j=l22-1; i>=0; i--,j--)
            {
                if(l1)
                {
                    l1--;
                    x=str[i]-'0';
                }
                else x=0;
                //cout <<  "x" << x << endl;
                if(l2)
                {
                    l2--;
                    y=ss[j]-'0';
                }
                else y=0;
                //cout << "y" << y << endl;
                z=x+y+d;
                //cout << z << " ";
                if(z>9)
                {
                    d=1;
                    c++;
                }
                else d=0;
            }
        }

        if(l1<l2)
        {
            for(int i=l11-1,j=l22-1; j>=0; i--,j--)
            {
                if(l1)
                {
                    l1--;
                    x=str[i]-'0';
                }
                else x=0;
                //cout << "x" << x << endl;
                if(l2)
                {
                    l2--;
                    y=ss[j]-'0';
                }
                else y=0;
                //cout << "y" << y << endl;
                z=x+y+d;
                //cout << z << " ";
                if(z>9)
                {
                    d=1;
                    c++;
                }
                else d=0;
            }
        }

        if(c==0) cout << "No carry operation." << endl;
        else if(c==1) cout << c << " carry operation." << endl;
        else
            cout << c << " carry operations." << endl;
    }

    return 0;
}
