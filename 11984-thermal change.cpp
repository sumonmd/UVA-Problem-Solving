#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double f,a,c,d;
    cin>>t;
        for(i=1;i<=t;i++)
        {
            scanf("%lf%lf",&c,&d);
            f = 9*c/5+d;
            a = f*5/9;
            printf("Case %d: %.2lf\n",i,a);
        }
    return 0;
}
