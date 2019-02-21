#include<bits/stdc++.h>
using namespace std;
#define N 1000000
bool ck[N];
int arrpos[1000000];
int primlist[1000000];
int main()
{
    for(int i=2,j=1;i<=N;i++){
        ck[i]=true;
    }
    ck[0]=false;
    ck[1]=false;
    for(int i=2;i<N/2;i++){
        if(ck[i]==true)
        {
            for(int j=i*2;j<N;j=j+i){
                ck[j]=false;
            }
        }

    }
    int index=1;
    for(int i=2; i<=N;i++)
    {
        if(ck[i])
        {
            primlist[i]=index;
            index++;
        }
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(ck[n]==true){

          cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }

    return 0;


}
