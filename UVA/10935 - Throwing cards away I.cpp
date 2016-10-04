#include <iostream>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    queue< int >q;
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        for(int i=0; i<n; i++)
        {
            q.push(i);
        }
        cout<< "Discarded cards:";
        while(q.size()>1)
        {
            cout<< " " << q.front()+1;
            q.pop();
            int x=q.front();
            q.pop();
            if(! q.empty()) cout<< ",";
            q.push(x);
        }
        cout<< "\n" << "Remaining card: "<< q.front()+1 <<endl;
        q.pop();
    }

    return 0;
}
