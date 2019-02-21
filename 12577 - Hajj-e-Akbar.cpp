#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i=0;
    while(getline(cin,str)&& !cin.eof()){
      i++;
        if(str=="*")
            return 0;
        else if(str=="Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            else if(str=="Umrah")
                cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;


    }
    return 0;

}
