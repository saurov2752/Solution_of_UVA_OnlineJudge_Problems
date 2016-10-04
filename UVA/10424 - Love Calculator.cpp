#include <bits/stdc++.h>

using namespace std;

int main()
{
    float z;
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int l1=s1.size();
        int l2=s2.size();
        int sum=0;
        for(int i=0; i<l1; i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
                sum+=s1[i]-96;
            if(s1[i]>='A' && s1[i]<='Z')
                sum+=s1[i]-64;
        }
        int tum=0;
        for(int i=0; i<l2; i++)
        {
            if(s2[i]>='a' && s2[i]<='z')
                tum+=s2[i]-96;
            if(s2[i]>='A' && s2[i]<='Z')
                tum+=s2[i]-64;
        }
        cout << sum << " " << tum << endl;
        int too=0;
        while(sum!=0)
        {
            too+=sum%10;
            sum=sum/10;
        }
        int foo=0;
        while(tum!=0)
        {
            foo+=tum%10;
            tum=tum/10;
        }
        cout << too << " " << foo << endl;
//        if(too>9)
//        {
//            sum=too;
//            too=0;
//            while(sum!=0)
//            {
//                too+=sum%10;
//                sum=sum/10;
//            }
//        }
//        if(foo>9)
//        {
//            tum=foo;
//            foo=0;
//            while(tum!=0)
//            {
//                foo+=tum%10;
//                tum=tum/10;
//            }
//        }
//        //cout << too << " " << foo << endl;
//        if(too>foo)
//            z=(float)foo*100/(float)too;
//        else
//            z=(float)too*100/(float)foo;
//        printf("%0.2f %%\n",z);


    }

    return 0;
}
