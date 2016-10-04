#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double m,h;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        //double z=((h*30)+((m/60)*30)-(m*6));
        if(h==0 && m==0) break;
        //double z=(h*30)+((m/60)*30);
        double z=((60*h)+m)*0.5;
        double s=(z-(m*6));
        //printf("%.3lf\n",s);
        double c;
        if(s<0)
        {
            s*=-1;
            //printf("%.3lf\n",c);
            if(s<=180) printf("%.3lf\n",s);
            if(s>180)
            {
                double x=(360-s);
                printf("%.3lf\n",x);
            }
        }
        else {
            if(s<=180) printf("%.3lf\n",s);
            if(s>180)
            {
                double x=(360-s);
                printf("%.3lf\n",x);
            }
        }


        //printf("%lf\n",s);
    }
    return 0;
}
