#include<bits/stdc++.h>
using namespace std;
double  arr[10000];
int main()
{
    double e;
    vector<double>v;
    for(int i=0;i<5;i++){
        cin>>e;
        v.push_back(e);
    }
    sort(v.begin(),v.end());
    cout<<accumulate(v.begin(),v.end()-1,0)<<" ";
    cout<<accumulate(v.begin()+1,v.end(),0)<<endl;

    return 0;
}
