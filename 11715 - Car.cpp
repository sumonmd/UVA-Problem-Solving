#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tt=0;
    float a,b,c;
    while(scanf("%d",&n)!=EOF){
        tt++;
    if(n==1){
            cin>>a>>b>>c;
        float s=((a+b)/2)*c;
        float ac=(b-a)/c;
        printf("Case %d: %0.3f %0.3f\n",tt,s,ac);
    }
    else if(n==2){
        cin>>a>>b>>c;
        float t=(b-a)/c;
        float s=(b*b-a*a)/(2*c);
        printf("Case %d: %0.3f %0.3f\n",tt,s,t);
    }
    else if(n==3){
            float u,a1,s,v,t;
        cin>>u>>a1>>s;
    v=sqrt(u*u+2*a1*s);
    t=(v-u)/a1;
    printf("Case %d: %0.3f %0.3f\n",tt,v,t);

    }
    else if(n==4)
    {
        float u,a,s,v,t;
        cin>>v>>a>>s;
        u=sqrt(v*v-2*a*s);
        t=(v-u)/a;
        printf("Case %d: %0.3f %0.3f\n",tt,u,t);
    }
    else
        return 0;
    }
    return 0;
}
