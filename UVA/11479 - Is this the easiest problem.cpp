#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll test;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        ll ar[10];
        for(int j=0;j<3;j++) cin >> ar[j];
        //cin >> ar[0] >> ar[1] >> ar[2];
        cout << "Case " << i+1 << ": ";
        sort(ar,ar+3);
        if(ar[0]==0 || ar[1]==0 || ar[2]==0) cout << "Invalid" << endl;
        else if(ar[0]==ar[2]) cout << "Equilateral" << endl;
        else if(ar[0]==ar[1] || ar[1]==ar[2]) cout << "Isosceles" << endl;
        else if(ar[0]+ar[1]>ar[2]) cout << "Scalene" << endl;
        else cout << "Invalid" << endl;
    }


//    int test,cs=0;
//    long long  int a,b,c;
//    scanf("%d",&test);
//    while(test--){
//
//        scanf("%lld %lld %lld",&a,&b,&c);
//        printf("Case %d: ",++cs);
//        if(a+b<=c||b+c<=a||c+a<=b)printf("Invalid\n");
//        else if(a==b&&b==c)printf("Equilateral\n");
//        else if(a==b||b==c||c==a)printf("Isosceles\n");
//        else printf("Scalene\n");
//    }



    return 0;
}
