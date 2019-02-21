#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int tst;
    cin>>tst;
    cin.ignore();
    while(tst--){
    cin>>str;
    int sum=0;
    int i=0;
    while(i<=str.size()){
        if(str[i]=='O'){
                int j=1;
            int k=i;
           // cout<<k<<endl;
            while(str[k]!='X'&&k<str.size()){
                sum=sum+j;

            j++;
            k=k+1;
            i++;
            }
            //cout<<sum<<endl;
        }
      i++;

    }

     cout<<sum<<endl;
    }

    return 0;
}
