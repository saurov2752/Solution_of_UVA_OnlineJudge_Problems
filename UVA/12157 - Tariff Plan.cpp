#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,t[100],i,cas=0;
 scanf("%d",&T);
 while(T--)
 {
  scanf("%d",&N);
  int mi=0,ju=0;
  for(i=0;i<N;++i)
  {
        scanf("%d",&t[i]);
        mi=mi+((t[i]/30)+1);
        ju=ju+((t[i]/60+1));
  }

  mi=mi*10;
  ju=ju*15;
  if(mi<ju) printf("Case %d: Mile %d\n",++cas,mi);
  else if(mi>ju) printf("Case %d: Juice %d\n",++cas,ju);
  else printf("Case %d: Mile Juice %d\n",++cas,ju);
 }

    return 0;
}
