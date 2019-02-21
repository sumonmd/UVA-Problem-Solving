#include<bits/stdc++.h>
using namespace std;



int main()
{

    bool ck[100000];



     int n,cek,t;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>n;
    memset(ck,false,100000);
    cek=n;
    while(1){
         int sum=0;
        while(n!=0){
                   int rm=n%10;
                    sum=sum+rm*rm;
                    n=n/10;

                }
                if(sum==1){
                    cout<<"Case #"<<i<<": "<<cek<<" is a Happy number."<<endl;
                    break;
                }
                if(sum==cek){
                    cout<<"Case #"<<i<<": "<<cek<<" is an Unhappy number."<<endl;
                    break;
                }
                if(ck[sum]==true)
                {
                    cout<<"Case #"<<i<<": "<<cek<<" is an Unhappy number."<<endl;
                    break;
                }

                ck[sum]=true;
                n=sum;
    }


        }

   return 0;

}
