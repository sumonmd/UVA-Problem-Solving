#include<bits/stdc++.h>
using namespace std;

long long int fibonacci(int n)
{
    long long int i,h,j,k,t;
    i=h=1;
    j=k=0;
    while(n>0){
    if(n%2==1){

        t=j*h;
        j=i*h+j*k+t;
        i=i*k+k;
    }
    t=h*h;
    h=2*k*h+t;
    k=k*k+t;
    n=n/2;
    }
    return j;

}

int main()

{
   long long  int a,b,c,n;
    while(scanf("%lld",&n)!=EOF){
    long long int ll=fibonacci(n);
    cout<<"The Fibonacci number for "<<n<<" is "<<ll<<endl;
    }

    return 0;
}
