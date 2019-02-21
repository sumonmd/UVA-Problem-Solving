#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    cin.ignore();
    for(int k=1;k<=tst;k++){
    string str;
    cin>>str;
    int sum=0;
    for(int i=0;i<str.size();i++){
        if((str[i]<='Z'&&str[i]>='A')||(str[i]>='a'&&str[i]<='z'))
        continue;
        else{
            sum=sum+str[i]-48;

        }


    }
    for(int i=1;i<=3;i++)
    {
        if((sum+i)%3==0){
            cout<<"Case "<<": "<<i<<endl;
        break;
        }
    }
    }

    return 0;
}
