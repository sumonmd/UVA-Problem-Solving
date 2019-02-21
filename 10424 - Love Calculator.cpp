#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
map<char,int>mp2;
int main()
{
    int i=1;
    for(char ch='a';ch<='z';ch++){

        mp[ch]=i;
        i++;
    }
    char str[25],str2[25];
    cin>>str>>str2;
    strlwr(str);
    strlwr(str2);
    int sum=0;
    for(int i=0;i<strlen(str);i++)
    {
        sum=sum+mp[str[i]];

    }
    cout<<sum<<endl;
    int sum2=0;
    for(int i=0;i<strlen(str);i++)
    {
        sum2=sum2+mp[str2[i]];
    }
    cout<<sum2<<endl;
    cout<<(sum/sum2)*100<<endl;
    for(int i=0;i<3;i++){
            int add=0;
    while(sum!=0){
        int rem=sum%10;
        add=add+rem;
         sum=sum/10;
        }
        sum=add;

    }
    for(int i=0;i<3;i++){
            int add2=0;
    while(sum2!=0){
        int rem=sum%10;
        add2=add2+rem;
         sum2=sum2/10;
        }
        sum2=add2;

    }
    double x=(1.0*sum/sum2)*100;
    cout<<x<<endl;


    return 0;
}
