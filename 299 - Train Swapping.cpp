#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j])
                    cnt++;
            }
        }

        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;

    }
    return 0;

}
