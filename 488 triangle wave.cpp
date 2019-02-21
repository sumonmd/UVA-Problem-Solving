#include<bits/stdc++.h>
using namespace std;
int ap[10000];
int main()
{
    int tst,np,ap;
    cin>>tst;
    //cout<<endl;
    for(int w=0;w<tst;w++){
    cin>>ap>>np;
    for(int i=0;i<np;i++){

        for(int i=1;i<=ap;i++){
            if(i==ap){
                    for(int k=i;k>0;k--){
                        for(int l=0;l<k;l++){
                            cout<<k;
                        }
                        cout<<endl;
                    }

            }
            else{
            for(int j=0;j<i;j++){
                cout<<i;
            }
             cout<<endl;

            }


        }
       if(w!=tst-1 ||i!=np-1 )
        cout<<endl;

    }

    }


    return 0;
}
