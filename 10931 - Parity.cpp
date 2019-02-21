#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem;
    while(scanf("%d",&n)!=0){
         if(n==0)
            return 0;
        int i=0,cnt=0,bin=0,mx=0;
       int arr[100];
        while(n!=0){
             rem=n%2;
            n/=2;
            arr[i]=rem;
            i++;
            if(rem==1)
                cnt++;
        mx++;
        }
        cout<<"The parity of ";
        for(int j=mx-1;j>=0;j--)
            cout<<arr[j];

        cout<<" is "<<cnt<<" (mod 2)."<<endl;

    }

    return 0;
}
