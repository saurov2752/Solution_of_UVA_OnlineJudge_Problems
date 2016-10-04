#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
    if(a==0 && b==0) return 0;
    int sum=0;
    int c=sqrt(a);
    int d=sqrt(b);
    for(double i=c;i<=d;i++)
    {
        //int x=pow(i,2);
        if(a<=i*i && i*i<=b)
            sum++;
        if(i*i>b)break;
        //else break;
    }
    printf("%d\n",sum);
    }
    return 0;
}
