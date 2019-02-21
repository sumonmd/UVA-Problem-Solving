#include<bits/stdc++.h>
using namespace std;

double pi=3.141592653589793;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){

        double a,b,c,ra,area;
        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
        double sum=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
        ra=(a*b*c)/sqrt(sum);
        area=2.0*pi*ra;
        printf("%0.2lf\n",area);

    }

    return 0;
}
