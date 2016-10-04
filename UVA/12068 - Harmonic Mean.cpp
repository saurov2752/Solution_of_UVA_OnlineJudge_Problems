#include <bits/stdc++.h>
#define ll long long

using namespace std;

long long int gcd( long long int a, long long int b )
{
    if( !b ) return a;
    return gcd( b,a%b );
}
long long int lcm(long long int a, long long int b)
{
    long long int c;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    return (a*b)/gcd(a,b);
}


 int main()
 {
  ll test,mn=0;
cin >> test;
while(test--)
{
    ll n,llcm,tr=1;
    cin >> n;
    ll ary[n],sum=0;
    for(ll i=0; i<n; i++) cin >> ary[i];
    for(ll i=0; i<n; i++)
    {
        llcm=lcm(tr,ary[i]);
        //cout << llcm << endl;
        tr=llcm;
    }
    for(ll i=0; i<n; i++) sum+=llcm/ary[i];
    long long int lb = (n*llcm);
    while(gcd(lb,sum)!=1)
    {
        ll cv=gcd(lb,sum);
        lb/=cv;
        sum/=cv;
    }
    cout << "Case " << ++mn << ": ";
        cout << lb << "/" << sum << endl;
}






//    ll test,mn=0;
//    cin >> test;
//    while(test--)
//    {
//        ll n;
//        cin >> n;
//        ll ary[n],sum=1;
//        for(ll i=0; i<n; i++)
//        {
//            cin >> ary[i];
//            sum*=ary[i];
//        }
//        ll ans=0;
//        for(ll i=0; i<n; i++)
//        {
//            ans+=sum/ary[i];
//        }
//        //cout << ans;
//        if(ans && sum){
//        ll c=1;
//        while(c!=0)
//        {
//            if(ans%2==0 && sum%2==0)
//            {
//                ans/=2;
//                sum/=2;
//                c=1;
//            }
//            else if(ans%3==0 && sum%3==0)
//            {
//                ans/=3;
//                sum/=3;
//                c=1;
//            }
//            else if(ans%5==0 && sum%5==0)
//            {
//                ans/=5;
//                sum/=5;
//                c=1;
//            }
//            else c=0;
//        }
//        //cout << ans << " " << sum ;
//        cout << "Case " << ++mn << ": ";
//        cout << n*sum << "/" << ans << endl;
//        }
//    }



    return 0;
}
