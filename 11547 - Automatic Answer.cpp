#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){

        cin>>n;
        n=((n*567)/9)+7492;
        n=(n*235)/47;
        n=n-498;
        if(n<0)
            n=(-1)*n;
        cout<<(n/10)%10<<endl;
    }
    return 0;
}
