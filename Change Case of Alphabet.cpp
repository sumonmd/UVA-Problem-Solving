#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int tst;
    cin>>tst;
    cin.ignore();
    while(tst--){
    cin>>str;
    for(int i=0;i<strlen(str);i++){
        if(str[i]<='z'&& str[i]>'Z')
            printf("%c",str[i]-32);
        else{
                char c=str[i]+32;
            printf("%c",c);

        }

    }
    cout<<endl;
    }

    return 0;
}
