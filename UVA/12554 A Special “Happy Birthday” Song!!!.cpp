#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str[105],ss[105]= {"Happy","birthday","to","you","Happy","birthday","to","you",
                              "Happy","birthday","to","Rujia","Happy","birthday","to","you",
                             };
    //for(int i=0;i<16;i++) cout << ss[i] << endl;
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++) cin >> str[i];
    //for(int i=0;i<n;i++) cout << str[i];
    //if(n>16)
        x=ceil(n/16)+1;
    for(int i=0,j=0,k=0; j<16*x; i++,j++,k++)
    {
        if(i==n) i=0;
        if(j%16==0) k=0;
        cout << str[i] << ": " << ss[k] << endl;
    }

    return 0;
}
