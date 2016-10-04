#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++)
    {
//            int ary[5];
//    for(int j=0;j<3;j++) cin >> ary[j];
//    sort(ary,ary+3);
//    cout<<"Case " << i+1 << ": " << ary[1] << endl;
        int a,b,c;
        cin >> a >> b >> c;
        if((a<=b && a>=c)||(a<=c && a>=b)) cout<<"Case " << i+1 << ": " << a << endl;
        else if((b<=c && b>=a)||(b<=a && b>=c)) cout<<"Case " << i+1 << ": " << b << endl;
        else if((c<=b && c>=a)||(c<=a && c>=b)) cout<<"Case " << i+1 << ": " << c << endl;
    }
    return 0;
}
