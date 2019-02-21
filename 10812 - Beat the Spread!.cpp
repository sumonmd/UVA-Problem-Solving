#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,x,y;
    while(t--){
        scanf("%d%d",&a,&b);
        if(a>=b&&(a+b)%2==0)
        {
            x=(a+b)/2;
            y=(a-b)/2;
            printf("%d %d\n",x,y);
        }
        else
            printf("impossible\n");

    }

    return 0;

}
