#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt,hh,mm;
    cin>>tt;
    while(tt--){
        int dm,dh;
        scanf("%d:%d",&hh,&mm);
        if(hh==12&&mm==0)
        {
            printf("%d:00\n",hh);


        }
       else if(mm>0)
        {
            dm=60-mm;
            dh=11-hh;
            if(dh==0){
                    if(dm<10)
                      printf("12:0%d\n",dh,dm);
            else
                printf("12:%d\n",dh,dm);
            }
            else
                printf("0%d:%d\n",dh,dm);
        }
        else{
            dh=12-hh;
                if(dh<10)
                printf("0%d:%d\n",(12-hh),mm);
        else
            printf("%d:%d\n",(12-hh),mm);
        }



    }
    return 0;
}
