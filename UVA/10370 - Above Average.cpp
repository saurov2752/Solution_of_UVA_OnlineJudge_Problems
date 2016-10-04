#include <bits/stdc++.h>

using namespace std;

int main()
{
    double test,ary[1050];
    cin >> test;
    char ch='%';
    while(test--)
    {
        double n,sum=0,c=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> ary[i];
            sum+=ary[i];
        }
        double avr=sum/n;
        for(int i=0;i<n;i++)
        {
            if(ary[i]>avr) c++;
        }
        //cout << (c/n)*100 << endl;
        printf("%0.3lf%c\n",(c/n)*100,ch);
    }


    return 0;
}
