#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int arr[1050];
    while(scanf("%d",&n)==1){
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){

                cnt++;
            }
        }
    }
    printf("Minimum exchange operations : %d\n",cnt);

    }
    return 0;


}
