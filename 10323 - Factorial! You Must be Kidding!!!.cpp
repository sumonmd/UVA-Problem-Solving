#include<bits/stdc++.h>
using namespace std;

long  long int fac(int n)
{
    if(n==1)
        return n;
          return n*fac(n-1);
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<8){
                if(n%2==0||n>0)
                  cout<<"Underflow!"<<endl;
                 else
                   cout<<"Overflow!"<<endl;

        }
        else if(n>13)
            cout<<"Overflow!"<<endl;
        else{
          long long int  res=fac(n);
           cout<<res<<endl;
        }
    }

    return 0;
}
