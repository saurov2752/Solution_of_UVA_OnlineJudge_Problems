#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    char str[150];
    getchar();
    for(int j=0;j<test;j++)
    {
        gets(str);
        int len=strlen(str);
        int c=0;
        cout << "Case #" << j+1 << ": ";
        for(int i=0;i<len;i++)
        {
            if(str[i]==' ') c++;
            else if(str[i]=='a') c++;
            else if(str[i]=='b') c+=2;
            else if(str[i]=='c') c+=3;
            else if(str[i]=='d') c++;
            else if(str[i]=='e') c+=2;
            else if(str[i]=='f') c+=3;
            else if(str[i]=='g') c++;
            else if(str[i]=='h') c+=2;
            else if(str[i]=='i') c+=3;
            else if(str[i]=='j') c++;
            else if(str[i]=='k') c+=2;
            else if(str[i]=='l') c+=3;
            else if(str[i]=='m') c++;
            else if(str[i]=='n') c+=2;
            else if(str[i]=='o') c+=3;
            else if(str[i]=='p') c++;
            else if(str[i]=='q') c+=2;
            else if(str[i]=='r') c+=3;
            else if(str[i]=='s') c+=4;
            else if(str[i]=='t') c++;
            else if(str[i]=='u') c+=2;
            else if(str[i]=='v') c+=3;
            else if(str[i]=='w') c++;
            else if(str[i]=='x') c+=2;
            else if(str[i]=='y') c+=3;
            else if(str[i]=='z') c+=4;
        }
        cout << c << endl;
    }


    return 0;
}
