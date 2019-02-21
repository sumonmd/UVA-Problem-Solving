#include<bits/stdc++.h>
using namespace std;

int main()
{
    double hh,mm;

    while(scanf("%lf:%lf",&hh,&mm)==2){
        double res;
        if((hh==0&&mm==00)||(hh==00&&mm==0))
            break;

            res=abs((0.5*(60*hh-11*mm)));
            if(res>180)
            {
                res=360-res;
                printf("%0.3f\n",res);
            }

            else
                printf("%0.3f\n",res);

    }
    return 0;
}
