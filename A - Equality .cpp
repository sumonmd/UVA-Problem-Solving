#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
    int n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        sum=sum+(arr[n-1]-arr[i]);
    }
    cout<<sum<<endl;
}
