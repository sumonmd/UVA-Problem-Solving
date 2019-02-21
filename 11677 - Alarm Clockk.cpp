#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF){
            if(h1==0&&m1==0&&h2==0&&m2==0)
            return 0;
        int ans;
        if(m1<=m2){
            if(h2==0)
                h2=24;
                if(h1==0)
                    h1=24;
            if(h1<=h2){
               ans=(h2-h1)*60+(m2-m1);
            }
            else{
                h2=h2+24;
                ans=(h2-h1)*60+(m2-m1);
            }
        }
        else{
                m2=m2+60;
        h2=h2-1;
              if(h2==0)
                h2=24;
                if(h1==0)
                    h1=24;
            if(h1<=h2){
               ans=(h2-h1)*60+(m2-m1);
            }
            else{
                h2=h2+24;
                ans=(h2-h1)*60+(m2-m1);
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
