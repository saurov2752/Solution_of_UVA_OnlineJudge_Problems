#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,s,i,j;
    while(1){
    cin >> n;
    if(n==0) break;
    int sq=ceil(sqrt(n));
    s=((sq*sq)-sq)+1;
      i=sq;
    j=sq;
    if(sq%2!=0)
    {
        while(s<n)
        {
            i--;
            s++;
        }
        while(s>n)
        {
            j--;
            s--;
        }
    }
    else
    {
        while(s<n)
        {
            j--;
            s++;
        }
        while(s>n)
        {
            i--;
            s--;
        }
    }
    cout << i << " " << j << endl;
    }
    return 0;
}
