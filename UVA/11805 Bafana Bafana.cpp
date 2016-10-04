#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,tp,np,pass,a;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        cin >> tp >> np >> pass;
        a=np+pass;
//        while(a>tp)     //Thats Right !! //
//        {
//            a=a-tp;
//        }
//        cout << "Case " << i << ": " << a << endl;
        if(a>tp)
        {
            if(a%tp==0) cout << "Case " << i << ": " << tp << endl;
            else
                cout << "Case " << i << ": " << a%tp << endl;
        }
        else cout << "Case " << i << ": " << a << endl;
    }


    return 0;
}
