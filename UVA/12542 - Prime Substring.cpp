#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{

    string str,ss[100005];
    while(getline(cin,str))
    {
        if(str=="0") break;;

        int i,j,l,k=0,c=0,res,ary[100005],drag=0;
        int len=str.size();
        char s[100005];
        //ss=str;
        //cout << ss;
        for(i=0; i<len; i++)
        {
            for(l=i; l<len; l++)
            {
                c=0;
                for(j=i; j<=l; j++)
                {
                    s[c++]=str[j];
                    s[c]='\0';
                }
                ss[k++]=s;
            }
        }
        for(i=0; i<k; i++)
        {
            if(!(istringstream(ss[i])>>res)) res=0;
            ary[drag++]=res;
        }
        //vector < int > vec;
        int p,asd[100005],gf=0;
        for(i=0; i<drag; i++)
        {
            p=sqrt(ary[i]);
            for(j=2; j<=p; j++)
            {
                if(ary[i]%j==0) break;
            }
            if(j==p+1) asd[gf++]=ary[i];
            // }
        }
        sort(asd,asd+gf);

        for(i=gf-1; i>=0; i--)
        {
            cout << asd[i] << endl;
            break;
        }
    }




    return 0;
}
