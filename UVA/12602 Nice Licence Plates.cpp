#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        char str[1000],ss[100];
        cin >> str;
        int k=0;
        for(int i=0; i<3; i++)
            ss[k++]=str[i];
        int y=0;
        for(int i=0; i<3; i++)
        {
            int x=1;
            for(int j=i+1; j<3; j++)
            {
                x*=26;
            }
            y+=(ss[i]-65)*x;
        }
        //cout << y << endl;;
        int z=0;
        for(int i=4; i<8; i++)
        {
            int x=str[i]-'0';
            //cout << x << endl;
            z=(z*10)+x;
            //cout << z << endl;
        }
        //cout << z << endl;
        if((abs(z-y))<=100) cout << "nice" << endl;
        else cout << "not nice" << endl;
    }

    return 0;
}
