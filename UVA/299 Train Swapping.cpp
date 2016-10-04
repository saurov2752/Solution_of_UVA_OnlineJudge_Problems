#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int ary[n+10];
        for(int i=0;i<n;i++) cin >> ary[i];
        int c=0,d;
        cout << "Optimal train swapping takes ";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(ary[j]>ary[j+1])
                {
                    c++;
                    d=ary[j];
                    ary[j]=ary[j+1];
                    ary[j+1]=d;
                }
            }
        }
//        for(int i=0;i<n;i++) cout << ary[i] << " ";
//        cout << endl;
        cout << c << " swaps." << endl;
    }


    return 0;
}
