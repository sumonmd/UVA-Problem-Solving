#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int f,tst,a,b,c,sum;
    cin>>f;
    while(f--){
        cin>>tst;
        sum=0;
        for(int i=0;i<tst;i++){
            cin>>a>>b>>c;
            sum=sum+(long long int) (a*c);

        }
        cout<<sum<<endl;

    }

    return 0;
}
