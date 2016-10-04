#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    // this is best solution
    /*int a,b,c,d;
 cin >> a >> b >> c >> d;
 while (a!=0 || b!=0 || c!=0 || d!=0)
 {
  int g1,g2,g3;
  if (b>a) g1 = 40-b+a; else g1 = a-b;
  if (c>b) g2 = c-b; else g2=40-b+c;
  if (d>c) g3 = 40+c-d; else g3 = c-d;
  int result = 360*2 + g1*9 + 360 + g2*9 + g3*9;
  cout << result << endl;
  cin >> a >> b >> c >> d;
 }
    */

     int a,b,c,d,sum;
        while (1) {
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if (a == 0 && b == 0 && c == 0 && d == 0)
                break;
            sum = 1080;
            if(a<b)
                sum+=(40-b+a)*9;
            else
                sum+=(a-b)*9;
            if(b>c)
                sum+=(40-b+c)*9;
            else
                sum+=(c-b)*9;
            if(c<d)
                sum+=(40-d+c)*9;
            else
                sum+=(c-d)*9;
            printf("%d\n",sum);
        }
    return 0;
}
