#include <bits/stdc++.h>
#define li long int

using namespace std;

int main()
{
     li n_case, i, n, k, x;

    cin>>n_case;
    for(i=0; i<n_case; i++)
    {
        cin>>n>>k>>x;
        cout<<"Case "<<i+1<<": "<<(((n * (n + 1))/2) - ((k * ((2 * x) + ( k -1 )))/2))<<"\n";
    }


    return 0;
}
