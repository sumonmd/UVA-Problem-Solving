#include<bits/stdc++.h>
using namespace std;
int arr[16384];
int main()
{
    for(int i=1;i<=14;i++){
        for(int j=pow(2,i);j>pow(2,i-1);j--){
            arr[j]=i;
        }
    }
    int n,cs=1;
    while(scanf("%d",&n)!=EOF){
            if(n<0)
            return 0;

    cout<<"Case "<<cs++<<": "<<arr[n]<<endl;
    }
    return 0;
}
