#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        int n,ary[100],k,m;
        cin >> n;
        printf("Case %d: ",i+1);
        for(int j=0; j<n; j++) cin >> ary[j];
        for(int l=0; l<n; l++)
        {
            k=0,m=0;
            for(int j=0; j<n; j++)
            {
                if(ary[l]>ary[j]) k++;
                if(ary[l]<ary[j]) m++;
            }
            if(k==(n/2) && m==(n/2))
            {
                cout << ary[l] << endl;
                break;
            }
        }
    }


    return 0;
}
