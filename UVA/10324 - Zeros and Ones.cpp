#include <bits/stdc++.h>

using namespace std;
char str[20000020];

int main()
{
    long int n,a,b,c=1,i,j;
    while(scanf("%s",str)==1){
    long int len=strlen(str);
    if(len==0) break;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        if(i==0) cout << "Case " << c++ << ":" << endl;
        if(a>b)
        {
            int sw=a;
            a=b;
            b=sw;
        }
        for(j=a;j<b;j++)
        {
            if(str[j]!=str[j+1])
            {
                cout << "No" << endl;
                break;
            }
        }
        if(j==b) cout << "Yes" << endl;
    }
    }
    return 0;
}
