#include<bits/stdc++.h>
using namespace std;

int rec(int n)
{
    if(n==1)
        return 1;
        if(n==0)
            return 0;
  else
    return rec(n-1)+rec(n-2);
}


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
            if(n==0)
            return 0;

        cout<<rec(n+1)<<endl;
    }
    return 0;
}
