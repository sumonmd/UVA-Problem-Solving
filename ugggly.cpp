#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ck=0;
    for(int i=2;i<=10000;i++){
        if(i%2==0||i%3==0||i%5==0){
            ck=ck+1;
            if(ck==){
                cout<<i<<endl;
                break;
            }

        }
    }

    return 0;
}
