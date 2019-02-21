#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if((n%400==0)||(n%100!=0 && n%4==0))
        {
            cout<<"This is leap year."<<endl;


        }
        if(n%15==0)
            cout<<"This is huluculu festival year."<<endl;

        if(n%55==0)
            cout<<"This is bulukulu festival year."<<endl;

        if(((n%400!=0)||(n%100==0 && n%4!=0))&&((n%15!=0)&&(n%55!=0)))
            cout<<"This is an ordinary year."<<endl;

        cout<<endl;
    }
    return 0;

    }
