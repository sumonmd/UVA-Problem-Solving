#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF){
    int sum=0,rem,res=0;
    int km=n;
    while(n>=k){
        res=res+n/k;
        //cout<<res<<endl;
        n=n%k+n/k;

    }
    cout<<res+km<<endl;

    }

    return 0;
}
