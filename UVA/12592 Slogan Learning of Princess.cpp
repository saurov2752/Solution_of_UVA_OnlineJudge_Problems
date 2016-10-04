#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str[200],ss[200];
    int n;
    cin >> n;
    for(int i=0; i<=n*2; i++)
    {
        getline(cin,str[i]);
    }
    //    for(int i=1; i<=n*2; i++)
    //    {
    //        cout << str[i] << endl;
    //    }
    int x;
    cin >> x;
    for(int i=0; i<=x; i++)
    {
        getline(cin,ss[i]);
    }
//    for(int i=1; i<=x; i++)
//        {
//            cout << ss[i] << endl;
//        }
    for(int i=1;i<=x;i++)
    {
        for(int k=1;k<=n*2;k++)
        {
            if(ss[i]==str[k])
            {
                cout << str[k+1] << endl; break;
            }
        }
    }


    return 0;
}
