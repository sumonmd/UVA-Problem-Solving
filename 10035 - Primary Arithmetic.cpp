#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int a,b;
    while(scanf("%u%u",&a,&b) !=EOF){
            if(a==0&&b==0)
            return 0;
    int cnt,k,rem;
    cnt=0;
    rem=0;
    if(a<b)
        swap(a,b);
    while(a!=0)
    {
        k=a%10+b%10+rem;
        if(k>9){
            cnt++;
            rem=1;
        }
        else
            rem=0;
        a/=10;
    b/=10;

    }
    if(cnt==0)
    cout<<"No carry operation."<<endl;
    else if(cnt==1)
        cout<<cnt<<" carry operation."<<endl;
    else
        cout<<cnt<<" carry operations."<<endl;

    }
    return 0;
}
