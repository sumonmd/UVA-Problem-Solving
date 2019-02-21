#include<bits/stdc++.h>
#define N 10000


using namespace std;
map<char,int>mp;
bool ck[N];
int main()
{
    int i=1;
    for(char ch='a';ch<='z';ch++){
        mp[ch]=i;
        i++;
       // cout<<mp[ch]<<endl;
    }
    int j=27;
    for(char ch='A';ch<='Z';ch++){
        mp[ch]=j;
        j++;
       // cout<<mp[ch]<<endl;
    }

  ck[0]=false;
  for(int i=1;i<N;i++)
        ck[i]=true;
  for(int i=2;i<N/2;i++)
    {
        if(ck[i]==true)
            for(int j=i*2;j<N;j=j+i)
               ck[j]=false;
    }

    string str;
    while(getline(cin,str)){
            int sum=0;
    for(int i=0;i<str.size();i++)
        sum=sum+mp[str[i]];
        //cout<<"sum="<<sum<<endl;
        if(ck[sum]==true)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
