#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    //const
     int n = 10;

int a[10];

int main() {
 int ntest;
 cin >> ntest;
 cout << "Lumberjacks:" << endl;
 for (int test=1; test<=ntest; test++)
 {
  for (int i=1; i<=n; i++) cin >> a[i];
  int tmp = a[2]-a[1];
  int i;
  for (i=3; i<=n; i++)
   if ((a[i]-a[i-1])*tmp<=0)
   {
    cout << "Unordered" << endl;
    break;
   }
  if (i==n+1) cout << "Ordered" << endl;
 }


    return 0;
}
