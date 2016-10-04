#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[1000];
    int i,c=0,len;
    while(gets(str))
    {
        //gets(str);
        bool flag=false;
        len=strlen(str);
        c=0;
        for(i=0; i<len; i++)
        {
            if(i==0 && str[i]==' ') flag=true;
            if(str[i]==' '&& ((str[i+1]>='a' && str[i+1]<='z') || (str[i+1]>='A'
                              && str[i+1]<='Z')))
                c++;
        }
       // cout<<c<<endl;
       // cout<<flag<<endl;
        if(flag==true) printf("%d\n",c);
        else printf("%d\n",c+1);
        //printf("%d\n",c+1);

    }
    return 0;
}
