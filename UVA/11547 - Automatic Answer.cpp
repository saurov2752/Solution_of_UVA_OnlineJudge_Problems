#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=abs((((n * 63 + 7492) * 5 - 498)/10)%10);
        //n=abs((n * 63 + 7492) * 5 - 498);
        printf("%d\n",n);
    }

    return 0;
}
