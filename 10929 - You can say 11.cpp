#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str)&& !cin.eof()){
            if(str=="0")
            return 0;
    int rem=0;
    int ln=str.size();
    for(int i=0;i<ln;i++){

     rem=(rem*10+(str[i]-48))%11;


    }
    if(rem==0)
        cout<<str<<" is a multiple of 11."<<endl;
    else
     cout<<str<<" is not a multiple of 11."<<endl;
    }

    return 0;

}
