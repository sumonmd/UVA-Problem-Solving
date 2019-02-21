#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    int tt;
    cin>>tt;
    while(tt--){
        cin>>str1;
        cin>>str2;
        int ln,ln2;
        ln=str1.size();
        ln2=str2.size();
        int ck=0;
        if(ln==ln2){

            for(int i=0;i<ln;i++){
                if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
                    str1[i]='a';}
                for(int j=0;j<ln2;j++){
                    if(str2[j]=='a'||str2[j]=='e'||str2[j]=='i'||str2[j]=='o'||str2[j]=='u')
                    str2[j]='a';
                }
            for(int i=0;i<ln2;i++){
                if(str1[i]!=str2[i]){
                    ck=1;
                    break;
                }
            }
            if(ck==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;



        }
        else
            cout<<"No"<<endl;


    }
    return 0;
}
