#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt,a,b,k=0;
    cin>>tt;
    while(tt--){
            k++;
        cin>>a>>b;
        if(a>b)
            swap(a,b);
            int sum=0;
        for(int i=a;i<=b;i++){
            if(i%2!=0)
                sum=sum+i;
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}
