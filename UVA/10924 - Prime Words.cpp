#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[50];
    while(cin >> str)
    {
        bool f=0;
        int len=strlen(str);
        int sum=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                sum+=str[i]-'a'+1;
            else
                sum+=str[i]-'A'+27;
        }
        for(int i=2;i<=sqrt(sum);i++)
        {
            if(sum%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout << "It is not a prime word." << endl;
        else cout << "It is a prime word." << endl;
    }


    return 0;
}
