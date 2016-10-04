#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    char str[10000],ss[10000];
    while(cin >> str)
    {
        ll len=strlen(str);
        sort(str,str+len);
        for(int i=0; i<=len; i++) {ss[i]=str[i];}
        //cout << str << endl;
        if(str[0]=='0')
        {
            for(int i=1; i<len; i++)
            {
                if(str[i]!='0')
                {
                    swap(str[0],str[i]);
                    break;
                }
            }
        }
        //cout << str << endl;
        reverse(ss,ss+len);
        //cout << ss << endl;
        ll x=atoll(ss);
        ll y=atoll(str);
        ll z=x-y;
        ll zz=z/9;
        //cout << x << endl << y << endl;
        cout << x << " - " << y << " = " << z << " = 9 * " << zz << endl;
    }

    return 0;
}
