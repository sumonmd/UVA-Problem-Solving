#include<bits/stdc++.h>
using namespace std;

char arr[1000];
map<char,int>mp;
int main()
{
    int n,tst;
    char ch;
    cin>>tst;
    cin.ignore();
    for(int k=1;k<=tst;k++){
            int s=0;
    while(1){
        scanf("%c",&ch);
        if(ch=='\n')
            break;
            scanf("%d",&n);
        arr[s]=ch;
        //v1.push_back(n);
        mp[ch]=n;

       s++;
    }
    int m=0;
    for(char a=arr[m];a<=mp.size();m++)
        for(int i=mp[ch];i>=1;i--){
            cout<<ch;
        }

    }


    return 0;
}
