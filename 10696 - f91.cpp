#include<bits/stdc++.h>
using namespace std;

int f91(int n)
{
    if(n<=100)
        return f91(f91(n+11));
    else if(n>=101)
        return n-10;

}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
            if(n==0)
            return 0;
    int a=f91(n);
    printf("f91(%d) = %d\n",n,a);
    }

    return 0;
}
