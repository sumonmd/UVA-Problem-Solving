#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;
int main()
{
     string str;


    char j='A';
    for(int i=2;i<=6;i++){

        for(int k=0;k<3;k++)
        {
            mp[j]=i;
    j++;
        }
    }
    mp['P']=7,mp['Q']=7,mp['R']=7,mp['S']=7;
    mp['T']=8,mp['U']=8,mp['V']=8;
    mp['W']=9,mp['X']=9,mp['Y']=9,mp['Z']=9;


    while(getline(cin,str)&&!cin.eof()){


    for(int i=0;i<str.size();i++){

        if(str[i]=='-'||str[i]=='1'||str[i]=='0')
            cout<<str[i];
        else
            cout<<mp[str[i]];

    }
    cout<<endl;
   // mp.clear();
    }
    return 0;
}
