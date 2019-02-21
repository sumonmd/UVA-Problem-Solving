#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF){
        if(n<0)
            return 0;
      long long  int res=1+n*(n+1)/2;
        cout<<res<<endl;
    }

    return 0;
}
