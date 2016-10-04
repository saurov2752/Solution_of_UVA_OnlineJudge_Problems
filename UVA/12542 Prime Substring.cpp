//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    char str[100000];
//    while(cin >> str)
//    {
//        if(str[0]=='0') return 0;
//        int v=0,ary[10000];
//        int len=strlen(str);
//        int i,j,k,m,ans;
//        for(i=0;i<len;i++)
//        {
//            for(j=i+1;j<=len;j++)
//            {
//                ans=0;
//                for(k=i;k<j;k++)
//                {
//                    ans=(str[k]-'0')+(ans*10);
//                }
//                //cout << ans << endl;
//                int c=sqrt(ans);
//                for(m=2;m<=c;m++)
//                {
//                    if(ans%m==0) break;
//                }
//                if(m==c+1) ary[v++]=ans;
//            }
//        }
//        sort(ary,ary+v);
//        for(i=0;i<v;i++){
//            cout << ary[v-1] << endl;
//            break;}
//    }
//
//    return 0;
//}


#include<bits/stdc++.h>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define st(s) s.size();
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

bool prime[10000010];
void is_prime()
{
    prime[1]=false;
        int n=sqrt(10000000);
        for(int i=2;i<=n;i++)
        {
            if(prime[i]!=false)
            {
                for(int j=2*i;j<=10000000;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
}
int main()
{

    cover(prime,true);
    is_prime();
    string s;
    while(getline(cin,s))
    {
        if(s.compare("0")==0)
            break;

        int l=st(s);
        ll p;
        ll Max=0;
        for(int i=0;i<l;i++)
        {
            for(int j=l;j>=i;j--)
            {
                istringstream buf(s.substr(i,j)); //string to integer;
                buf >> p;
                if(p > 100000)
                 continue;
                if(prime[p])
                {
                    if(Max < p)
                    Max=p;
                }
            }
        }
        cout<<Max<<endl;

    }

    return 0;
}
