#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    a=0;
    b=1;
    cin>>n;
    for(int i=0;i<n;i++){

        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
