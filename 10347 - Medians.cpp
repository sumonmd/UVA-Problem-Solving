#include<bits/stdc++.h>
using namespace std;
int main()

{
    //infile;
    //outfile;

   double p,q,r,s;
    //iiscan(tst);
    while(scanf("%lf%lf%lf",&p,&q,&r)==3)
    {
        s = p+q+r;
        s/=2.0;
        s = sqrt(s*(s-p)*(s-q)*(s-r));
        s = (4.0/3.0)*s;
        if(s>0)
            printf("%0.3lf\n",s);
        else
            printf("-1.000\n");
    }

    return 0;
}
