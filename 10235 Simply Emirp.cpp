#include<bits/stdc++.h>
#define N 1000000
using namespace std;


bool cheak[N+1];

int main()
{

    cheak[0]=true;
    cheak[1]=true;

    for(int i=4; i<=N; i+=2)
        cheak[i]=true;

    for(int i=3; i*i<=N; i+=2)
    {
        if(cheak[i]==false)
            for(int j=i*2; j<=N; j=j+i)
                cheak[j]=true;
    }

    int n;
    while(scanf("%d",&n)==1)
    {
        int a=n;
        if(cheak[n]==false)
        {
            int rm,num=0;
            while(n!=0)
            {
                rm=n%10;
                num=num*10+rm;
                n/=10;
            }
            if(num==a || cheak[num]==true)
            {
                cout<<a<<" is prime."<<endl;
            }
            else if(cheak[num]==false)
                cout<<a<<" is emirp."<<endl;



        }
        else
            cout<<n<<" is not prime."<<endl;

    }
    return 0;
}
