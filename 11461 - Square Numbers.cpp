#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
         int cnt=0;
        if(a==0||b==0)
            return  0;
        else{

            if(a>b)
                swap(a,b);

            for(int i=a;i<=b;i++){
                int s=sqrt(i);
                if(i==s*s)
                    cnt++;
            }

        }
        cout<<cnt<<endl;


    }
    return 0;

}
