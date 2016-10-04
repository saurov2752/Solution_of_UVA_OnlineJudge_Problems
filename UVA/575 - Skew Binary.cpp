#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    char str[1000];
    long long a,i,len,sum=0;
    while(scanf("%s",str)==1)
    {
        len=strlen(str);
        if(strcmp(str,"0")==0) return 0;
        //printf("%d\n",len);
        i=0;
        while(len>0)
        {
            sum+=(str[i]-'0')*(pow(2,len)-1);
            i++;
            len--;
        }
        printf("%lld\n",sum);
        //printf("%lld\n",i);
        sum=0;
    }
    return 0;
}
