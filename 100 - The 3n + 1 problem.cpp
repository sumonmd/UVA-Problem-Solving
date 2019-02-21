#include<bits/stdc++.h>
using namespace std;
//int arr[10000];

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&a>0&&b>0){
    printf("%d %d ",a,b);
    if(a>b)
        swap(a,b);
    int ans,sum=0;
    for(int i=a;i<=b;i++){
        int cnt=1;
        for(int j=i;j!=1;j=j)
        {
             if(j%2!=0)
                j=3*j+1;
           else if(j%2==0)
            j=j/2;
            cnt++;

        }
        //cout<<cnt<<endl;
        if(cnt>sum)
            sum=cnt;
        //arr[i]=cnt;
        //cout<<arr[i]<<endl;

    }
    cout<<sum<<endl;
    }

    return 0;
}
