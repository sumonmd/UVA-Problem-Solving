#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>arr;
    int n,e;
    cin>>n;
    list<int>::iterator it;

    for(int i=0;i<n;i++){
        cin>>e;
        arr.push_back(e);
    }
    for(it=arr.begin();it!=arr.end();it++){
            if(it.unique())
        cout<<(*it)<<" ";
    }
    return 0;

}
