#include<bits/stdc++.h>
using namespace std;

int arr[2000001];
int main()
{
    int n;
    while(scanf("%d",&n)==1){
        if(n==0)
            return 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int j=0;j<n;j++){
            if(j==n-1)
                cout<<arr[j];
            else
              cout<<arr[j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
