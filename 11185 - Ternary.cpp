#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("int.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    int str[50];
    while(scanf("%d",&n)!=EOF){
            if(n<0)
            return 0;
    else if(n==0)
        cout<<0<<endl;
    else{
            int i=0;
    while(n!=0){
        int rm=n%3;
          str[i]=rm;
        n=n/3;
    i++;

    }
   // cout<<i<<endl;
    for(int j=i-1;j>=0;j--){
        cout<<str[j];
    }
    cout<<endl;
    }
    }
    return 0;
}
