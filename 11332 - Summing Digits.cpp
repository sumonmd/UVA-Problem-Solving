#include<bits/stdc++.h>
using namespace std;

int digit(long long int n)
{
    if(n<=9)
        return n;
    else
    {
        int rm,sum=0;
        while(n!=0){
          rm=n%10;
          sum=sum+rm;
          n/=10;
        }
        return digit(sum);
    }
}

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF){

        if(n==0)
        return 0;
        else if(n<=9)
            cout<<n<<endl;
        else
        {
            int dig=digit(n);
            cout<<dig<<endl;
        }


    }
    return 0;
}
