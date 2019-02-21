#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

int status[SIZE];

int  sieve(int n)
{
    int i,j;
    for(i=0; i<SIZE; i++) status[i]= 0;
    int sq = sqrt(SIZE);
    for(i=4; i<=SIZE; i+=2) status[i] = 1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=SIZE; j+=i) status[j]=1;
        }
    }
    return status[1] = 1;

}


int main()
{
    int n,m,pr;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        pr=n*i+1;
        if(!sieve(pr))
        {

            cout<<i<<endl;
            break;
        }


    }

    return 0;
}
