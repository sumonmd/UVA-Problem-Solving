#include<bits/stdc++.h>
using namespace std;

int arr[1001];
int main()
{
    vector<int>v;
    int n,e;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
     v.push_back(e);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
            sum=sum+(v[n-1]-v[i]);

    }
    cout<<sum<<endl;

    return 0;

}
