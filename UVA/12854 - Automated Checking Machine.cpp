#include <bits/stdc++.h>
#define li long int

using namespace std;


int main()
{
    li ar[10],br[10];
    while(cin >> ar[0] >> ar[1] >> ar[2] >> ar[3] >> ar[4]){
    li a=0;
    for(int i=0;i<5;i++)
    {
        cin >> br[i];
        if(ar[i]==br[i]) a=1;
    }
    if(a) cout << "N" << endl;
    else cout << "Y" << endl;
    }

    return 0;
}
