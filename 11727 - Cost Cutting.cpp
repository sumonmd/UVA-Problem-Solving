#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int tt;
    cin>>tt;
    int t=0;
    while(tt--){
            t++;
        for(int i=0;i<3;i++)
            cin>>arr[i];

        sort(arr,arr+3);
        cout<<"Case "<<t<<": "<<arr[1]<<endl;
    }
    return 0;
}
