#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum,sss,aaa;
void pw1(ll x)
{
    sss=1;
    for(int i=1; i<=x; i++)
        sss*=2;
}
void pw2(ll y)
{
    aaa=1;
    for(int i=1; i<=y; i++)
        aaa*=2;
        aaa-=1;
}

int main()
{
    ll n,l;
    int prime[100]={2,3,5,7,11,13,17,19,23,29,31};
    while(cin >> n)
    {
        if(n==0) break;
        bool f=0;
        pw1(n-1);
        pw2(n);
        ll z=sss*aaa;
        for(int i=0;i<11;i++)
        {
            if(n==prime[i]) f=1;
        }
        if(f==1)
        {
            if(n==11||n==23||n==29)
                cout << "Given number is prime. But, NO perfect number is available." << endl;
            else cout << "Perfect: " << z << '!' << endl;
        }
        else cout << "Given number is NOT prime! NO perfect number is available." << endl;
    }


    return 0;
}


//ll sum,sss,aaa;
//void perf(ll n)
//{
//    sum=0;
//    ll nn=sqrt(n);
//    for(ll i=2;i<=nn;i++)
//    {
//        if(n%i==0)
//        {
//            sum+=i+n/i;
//        }
//    }
//    sum+=1;
//}
//void pw1(ll x)
//{
//    sss=1;
//    for(int i=1; i<=x; i++)
//        sss*=2;
//}
//void pw2(ll y)
//{
//    aaa=1;
//    for(int i=1; i<=y; i++)
//        aaa*=2;
//        aaa-=1;
//}
//int main()
//{
//    ll n,l;
//    while(cin >> n)
//    {
//        if(n==0) break;
//        int f=0;
//        pw1(n-1);
//        pw2(n);
//        ll z=sss*aaa;
//        //cout << z << endl;
//        //z=sqrt(z);
//        perf(z);
//        if(z==sum)
//        cout << "Perfect: " << sum << "!" << endl;
//        else
//        {
//            ll g=sqrt(sum);
//            for(l=2;l<=g;l++)
//            {
//                if(sum%l==0)
//                {
//                    f=1;
//                    break;
//                }
//            }
//            //if(l==g+1) f=0;
//            if(f==1) cout << "Given number is NOT prime! NO perfect number is available." << endl;
//            else cout << "Given number is prime.  But, NO perfect number is available." << endl;
//        }
//    }
//    return 0;
//}
