#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    char year[100000];
    ll c=0;
    while(cin >> year)
    {
        //c++;
        ll yr=0,f=0,hulu=0,bulu=0;
        ll len=strlen(year);
        for(int i=len-4; i<len; i++)
        {
            int x=year[i]-'0';
            yr=x+yr*10;
        }
        if(yr%4==0 || yr%400==0) f=1;
        if(yr%15==0) hulu=1;
        if(f==1)
        {
            if(yr%55==0) bulu=1;
        }
        if(c!=0) cout << endl;
        if(f==1) cout << "This is leap year." << endl;
        if(hulu==1) cout << "This is huluculu festival year." << endl;
        if(bulu==1) cout << "This is buluculu festival year." << endl;
        if(f==0 && hulu==0 && bulu==0) cout << "This is an ordinary year." << endl;
        c++;
    }


    return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
long long a,b,c,d,e,i,l,leap,hulu,bulu,nl=0;
char s[100000];
while(gets(s))
{
a=0;
b=0;
c=0;
d=0;
e=0;
leap=0;
hulu=0;
bulu=0;
l=strlen(s);
for(i=0;i<l;i++)
    {
    a=a*10+(s[i]-'0');
    a=a%4;
    }
if(a==0)
    {
    for(i=0;i<l;i++)
        {
        b=b*10+(s[i]-'0');
        b=b%100;
        }
    if(b==0)
        {
        for(i=0;i<l;i++)
            {
            c=c*10+(s[i]-'0');
            c=c%400;
            }
        if(c==0)
        leap=1;
        }
    else
    leap=1;
    }
for(i=0;i<l;i++)
    {
    d=d*10+(s[i]-'0');
    d=d%15;
    }
if(d==0)
hulu=1;
if(leap==1)
    {
    for(i=0;i<l;i++)
        {
        e=e*10+(s[i]-'0');
        e=e%55;
        }
    if(e==0)
    bulu=1;
    }
if(nl!=0)
printf("\n");
if(leap==1)
printf("This is leap year.\n");
if(hulu==1)
printf("This is huluculu festival year.\n");
if(bulu==1)
printf("This is bulukulu festival year.\n");
if(leap==0 && hulu==0 && bulu==0)
printf("This is an ordinary year.\n");
nl++;
}
return 0;
}
*/
