#include <bits/stdc++.h>

using namespace std;
int ary[5000],k;
int sum,c,ans,f;
void price(int x)
{
    ans=1;
    c++;
    for(int i=1; i<=c; i++)
    {
        ans*=x;
    }
    ans*=2;
    //cout << ans << endl;
    //cout << ans << endl;
    sum+=ans;
    if(sum>5000000)
    {
        //cout << "Too expensive" << endl;
        f=1;
    }
    //cout << sum << endl;

}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        c=0;
        f=0;
        k=0;
        sum=0;
        while(cin >> x && x)
        {
            ary[k++]=x;
        }
        sort(ary,ary+k);
        for(int i=k-1; i>=0; i--) //cout << ary[i] << endl;
        {
            if(f==1) break;
            price(ary[i]);
        }
        if(f==1) cout << "Too expensive" << endl;
        else cout << sum << endl;
    }

    return 0;
}
