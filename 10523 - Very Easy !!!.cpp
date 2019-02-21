#include<bits/stdc++.h>
using namespace std;

string make_same(string str, int len)
{
    for(int i=0; i<len; i++)
        str = '0'+str;
    return str;
}

string string_add(string num1, string num2)
{
    int len1=num1.size();
    int len2=num2.size();
    if(len1>len2)
        num2 = make_same(num2,len1-len2);
    if(len2>len1)
        num1 = make_same(num1,len2-len1);
    int len = max(len1,len2),carry=0;
    string sum="";
    for(int i=len-1;i>=0; i--)
    {
        int x = (carry+num1[i]-48)+(num2[i]-48);
        sum = (char)((x%10)+48)+sum;
        carry = x/10;
    }
    if(carry)
        sum = (char)(carry+48)+sum;
    return sum;
}
int main()
{
    int n,a;
    long long int sum=0;
    while(scanf("%d%d",&n,&a)==2){

        for(int i=1;i<=n;i++){

            sum=sum+i*pow(a,i);
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
