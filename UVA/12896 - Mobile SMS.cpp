#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,t;
    cin >> test;
    char c = '"';
    while(test--)
    {
        cin >> t;
        int ar[t],br[t];
        for(int i=0;i<t;i++) cin >> ar[i];
        for(int i=0;i<t;i++) cin >> br[i];
        for(int i=0;i<t;i++)
        {
            if(ar[i]==1 && br[i]==1) cout << ".";
            else if(ar[i]==1 && br[i]==2) cout << ",";
            else if(ar[i]==1 && br[i]==3) cout << "?";
            else if(ar[i]==1 && br[i]==4) cout << c ;
            else if(ar[i]==2 && br[i]==1) cout << "a";
            else if(ar[i]==2 && br[i]==2) cout << "b";
            else if(ar[i]==2 && br[i]==3) cout << "c";
            else if(ar[i]==3 && br[i]==1) cout << "d";
            else if(ar[i]==3 && br[i]==2) cout << "e";
            else if(ar[i]==3 && br[i]==3) cout << "f";
            else if(ar[i]==4 && br[i]==1) cout << "g";
            else if(ar[i]==4 && br[i]==2) cout << "h";
            else if(ar[i]==4 && br[i]==3) cout << "i";
            else if(ar[i]==5 && br[i]==1) cout << "j";
            else if(ar[i]==5 && br[i]==2) cout << "k";
            else if(ar[i]==5 && br[i]==3) cout << "l";
            else if(ar[i]==6 && br[i]==1) cout << "m";
            else if(ar[i]==6 && br[i]==2) cout << "n";
            else if(ar[i]==6 && br[i]==3) cout << "o";
            else if(ar[i]==7 && br[i]==1) cout << "p";
            else if(ar[i]==7 && br[i]==2) cout << "q";
            else if(ar[i]==7 && br[i]==3) cout << "r";
            else if(ar[i]==7 && br[i]==4) cout << "s";
            else if(ar[i]==8 && br[i]==1) cout << "t";
            else if(ar[i]==8 && br[i]==2) cout << "u";
            else if(ar[i]==8 && br[i]==3) cout << "v";
            else if(ar[i]==9 && br[i]==1) cout << "w";
            else if(ar[i]==9 && br[i]==2) cout << "x";
            else if(ar[i]==9 && br[i]==3) cout << "y";
            else if(ar[i]==9 && br[i]==4) cout << "z";
            else if(ar[i]==0)
            {
                for(int j=0;j<br[i];j++) cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
