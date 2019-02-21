#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    while(scanf("%d%d%d",&arr[0],&arr[1],&arr[2])!=EOF){

        if(arr[0]==0||arr[1]==0||arr[2]==0)
            return 0;

        else
        {
            sort(arr,arr+3);
            if((arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2]))
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }



    }
    return 0;
}
